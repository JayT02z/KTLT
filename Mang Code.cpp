#include <iostream>
using namespace std;
int main ()
{ 
	// Viet chuong trình nhap vào 2 so nguyên duong n và m (2 <= n <= 10, 2 <= m <= 10). 
	//Tao mang 2 chieu chua các so nguyên có n hàng và m cot. Tính tong các giá tri biên 
	int n, m, numbers[10][10];
	
	cout << "n = ";
	cin >> n;
	
	cout << "m = ";
	cin >> m;
	
	cout << "Nhap mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> numbers[i][j];	
		}
	}
	
//	int S_dau = 0;
//	int S_cuoi = 0;
//	int S_giua = 0;
//	
//	for (int i = 0; i < m ; i++ )
//	{
//		S_dau += numbers[0][i];
//		S_cuoi += numbers[n-1][i];
//	}
//	
//	for (int i = 1; i < n -1; i++)
//	{
//		S_giua += (numbers[i][0] + numbers[i][m-1]);
//	}
//	
//	cout << "Tong cac gia tri bien la: " << (S_dau + S_cuoi + S_giua);

	int S = 0;
	for (int i = 0; i < n; i++)
	{
		if(i == 0 || i == (n-1))
		{
			for (int j = 0; j < m ; j++)
			{
				S += numbers[i][j];
			}
			continue;
		}
		for (int j = 0; j < m; j++)
		{
			if(j == 0 || j == (m-1))
			{
				S += numbers[i][j];
			}
		}
			
	}
	cout << "Tong cac gia tri bien la: " << S;
	return 0;
}




