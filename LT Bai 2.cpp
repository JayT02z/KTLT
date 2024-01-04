#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
const int MAXSIZE= 1000;
void TaoMang1C_SoNguyen(int a[], int &n); 
void XuatMang1C_SoNguyen(int a[], int n); 
void ThemPhanTu(int a[], int &n, int x, int vt); 
int TimPhanTu(int a[], int n, int x); 
void XoaPhanTu(int a[], int &n, int x); 
void SapXepTang(int a[], int n);
int KiemTraSoChinhPhuong(int x); 
void LietKeSoChinhPhuong(int a[], int n);

void main ()
{
	int A[MAXSIZE], N;
	int key, x,vt;
	
	TaoMang1C_SoNguyen (A, N);
	
	cout << "\nNoi dung cua Mang la: ";
	
	XuatMang1C_SoNguyen(A, N);
	
	cout << "\nBan hay cho biet phan tu muon them: ";
	cin >> x;
	cout << "\nBan hay cho biet vi tri muon them: ";
	cin >> vt;
	ThemPhanTu( A, N, x, vt);
	cout << "\nPt muon xoa: ";
	cin >> x;
	XoaPhanTu(A, N, x);
	SapXepTang(A , N);
	LietKeSoChinhPhuong(A, N);
	return 0;
}
void TaoMang1C_SoNguyen(int a[], int &n); 
{
	do
	{
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
	}
	while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a[" << i << "]= ";
		cin >> a[i];
	}
}
void XuatMang1C_SoNguyen(int a[], int n)
{ 
	for (int i=0; i<n; i++)
	cout << a[i] << "\t";
}
void ThemPhanTu(int a[], int &n, int x, int vt)
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
		XuatMang1C_SoNguyen(a, n);
	}	
}
int TimPhanTu(int a[], int n, int x)
{
	for (int i=0; i<n; i++)
		if( a[i] == x)
			return i;
		return -1;
}
void XoaPhanTu(int a[], int &n, int x)
{
	int vt=TimPhanTu(a, n, x);
	if (vt == -1)
		cout << "\nkhong tim thay phan tu " << x << "muon xoa.";
	else
	{
		for (int i=vt; i <= n-2;)
	}
}


