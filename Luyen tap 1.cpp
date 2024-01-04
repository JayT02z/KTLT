#include <iostream>
using namespace std;
#define MAXSIZE 40
int ThemPhanTu(int a[], int &n, int x, int vt);
int NhapDayA(int a[], int &n);
int XuatDayA(int a[], int n);
void XepTangDan(int a[], int n);
int main()
{
    int A[MAXSIZE];
    int N, vt,x;
    NhapDayA(A,N);
    cout << "Noi dung cua mang la:" << endl;
    XuatDayA(A, N);
    cout << "\nBan hay cho biet phan tu muon them: ";
	cin >> x;
	cout << "\nBan hay cho biet vi tri muon them: ";
	cin >> vt;
    ThemPhanTu( A, N, x, vt);
    XepTangDan(A , N);
    return 0;
}
int NhapDayA(int a[], int &n)
{
	do
	{
	cout << "Cho biet so phan tu cua mang: " ;
	cin >> n;
	}
	while (n<=0);
	for (int i=0; i < n; i++)
	{
		cout << "Gia tri phan tu a[" << i << "] = ";
		cin >> a[i];
	}
}
int XuatDayA(int a[], int n)
{
	for (int i=0; i < n; i++)
		cout << a[i] << "\t";
	cout<<"\n-----------------------------------\n";
}
int ThemPhanTu(int a[], int &n, int x, int vt)
{
	if(vt < 0 && vt > n)
		cout << "\nVi tri k hop le." << vt;
	else
	{
		for (int i=n; i > vt; i--)
			a[i] = a[i-1];
		a[vt]=x;
		n++;
		cout << "\nMang sau khi them " << x << "vao vi tri " << vt << "la: ";
		XuatDayA(a, n);
	}	
}
void XepTangDan(int a[], int n)
{
	for (int i=0; i<n; i++)
		for(int j=i+1; j<n; j++)
			if(a[i] > a[j])
			{
				int tam = a[i];
				a[i] = a[j]; 
				a[j] = tam;
			}	
	cout << "\n Day sau khi duoc sap xep la: ";
	XuatDayA(a, n);
}

