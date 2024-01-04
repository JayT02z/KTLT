#include <iostream>
using namespace std;
int main ()
{
    int n, arr[n], k;
    cout << "n = ";
    cin >> n;
    
    
    while (n < 2 && n > 10)
    {
    	cout << "Nhap lai n: ";
	}
	
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	cout << "k = ";
	cin >> k;
	
	int x = -1, y = -1;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if(arr[i] + arr[j] == k && i != j)
			{
				x = i;
				y = j;
				break;
			}
		}
		if( x != -1 && y != -1)
		{
			break;
		}
	}
	
	if( x != -1 && y != -1)
	{
		cout << "Ket qua la: " << x << " " << y;
	}
	else
	{
		cout << "khong co";
	}

//	int n, m, arr[10][10], num[10][10];
//	cout << "n = ";
//	cin >> n;
//	
//	cout << "m = ";
//	cin >> m;
//	
//	
//	cout << "Nhap ma tran 1: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	
//	cout << "Nhap ma tran 2: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> num[i][j];
//		}
//	}
//	
//	int S = 0;
//	cout << "Tong 2 ma tran: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			S = num[i][j] + arr[i][j];
//			cout <<  S << " ";
//		}
//		cout << endl;
//	}


//	int n, m, arr[10][10];
//	cout << "n = ";
//	cin >> n;
//	
//	cout << "m = ";
//	cin >> m;
//	
//	
//	cout << "Nhap ma tran: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	
//	
//	int S = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if(arr[i][j] % 2 != 0)
//			{
//				S += arr[i][j];
//			}
//		}
//	} 
//	
//	cout << "Tong cac so le la: " << S;
	return 0;
}
