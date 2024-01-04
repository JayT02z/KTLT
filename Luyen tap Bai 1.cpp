#include <iostream>
using namespace std;
#define MAXSIZE 1000
int NhapMang1C_SoNguyen(int a[], int &n);
int XuatMang1C_SoNguyen(int a[], int n);
int main()
{
    int A[MAXSIZE];
    int N;
    NhapMang1C_SoNguyen(A, N);
    cout << "Noi dung cua mang la:" << endl;
    XuatMang1C_SoNguyen(A, N);
    return 0;
}
int NhapMang1C_SoNguyen(int a[], int &n)
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
int XuatMang1C_SoNguyen (int a[], int n)
{
	for (int i=0; i < n; i++)
		cout << a[i] << "\t";
	cout<<"\n-----------------------------------\n";
}
