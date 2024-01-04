#include <iostream>
#include <math.h>


using namespace std;
void Create_matrix(int arr[], int n);
void Out_matrix(int arr[], int n);
int sum_of_matrix(int arr[], int n);
float avg_of_matrix(int arr[], int n);
int max_of_matrix(int arr[], int n);
int sum_of_even_numbers(int arr[], int n);
bool is_prime(int n);
int minimum_of_prime(int arr[], int n);
int find_location_of_x(int arr[], int n, int x);
int find_minimum_of_num(int arr[], int n); 
int Count_of_plus(int arr[], int n);
int Count_of_x(int arr[], int n, int x);
int count_of_prime(int arr[], int n);
int list_of_location_of_even(int arr[], int n);
int first_location_of_even(int arr[], int n);

int main ()
{
	int num[20], n, x;
	cout << "n = ";
	cin >> n;
	Create_matrix(num, n);
	Out_matrix(num, n);
	cout << "\nTong cua mang: " << sum_of_matrix(num, n);  
	cout << "\nTrung binh cua mang: " << avg_of_matrix(num, n);
	cout << "\nGia tri lon nhat cua mang: " << max_of_matrix(num, n);
	cout << "\nSo nguyen to nho nhat la: " << minimum_of_prime(num, n); 
	cout << "\nx = ";
	cin >> x;
	find_location_of_x(num, n, x); 
	cout <<"\nVi tri phan tu nho nhat trong mang la: " << find_minimum_of_num(num, n); 
	cout << "\nSo phan tu duong trong mang la: " << Count_of_plus(num, n); 
	cout << "\nSo lan phan tu " << x << " xuat hien trong mang la: " << Count_of_x(num, n, x);
	cout << "\nSo lan so nguyen to xuat hien trong mang la: " << count_of_prime(num, n);
	list_of_location_of_even(num, n);
	cout << "\nVi tri cua gia tri chan dau tien la: " << first_location_of_even(num, n); 
 
	
	return 0;
} 

void Create_matrix(int arr[], int n)
{
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i]; 
	}
}

void Out_matrix(int arr[], int n)
{
	cout << "Mang: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
} 

int sum_of_matrix(int arr[], int n)
{
	
	if(n == 1)
	{
		return arr[0];
	}
	return arr[n - 1] + sum_of_matrix(arr, n - 1);

}

float avg_of_matrix(int arr[], int n)
{
	int sum = 0;
	
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	
	return (float) sum / n;
	
}

int max_of_matrix(int arr[], int n)
{
	int max = arr[0];
	for (int i = 0; i < n - 1; i++)
	{
		if(arr[i] < arr[i + 1])
		{
			max = arr[i + 1];
		}
	}
	return max;
}

int sum_of_even_numbers(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if(arr[i] == 0)
		{
			sum += arr[i];
		}
	}
	return sum;
}

bool is_prime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0 )
		{
			return false;
		}
	}
	return true;
}

int minimum_of_prime(int arr[], int n)
{
	int minimum;
	for (int i = n - 1; i > 0 ; i--)
	{
		if(is_prime(arr[i]))
		{
			for (int j = 0; j < i; j++)
			{
				if(is_prime(arr[j]))
				{
					if(arr[j] > arr[i])
					{
						minimum = arr[i];
					}
					else
					{
						minimum = arr[j];
					}
				}
			}
		}	
	}
	return minimum;
}

int find_location_of_x(int arr[], int n, int x)
{
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == x)
		{
			cout <<"Vi tri cua gia tri " << x << " trong mang la: " << i;
		}
	}
	cout << "\nKhong co gia tri " << x << " trong mang.";
}

int find_minimum_of_num(int arr[], int n)
{
	int minimum = 0;
	for(int i = 0; i < n - 1; i++)
	{
		if(arr[i] > arr[i + 1])
		{
			minimum = i + 1;
		}
	}
	return minimum;
	
}

int Count_of_plus(int arr[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if(arr[i] > 0);
		{
			count += 1;
		}
	}
	return count;
}

int Count_of_x(int arr[], int n, int x)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if(arr[i] == x)
		{
			count += 1;
		}
	}
	return count;
}

int count_of_prime(int arr[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if(is_prime(arr[i]) )
		{
			count += 1;
		}
	}
	return count;
}

int list_of_location_of_even(int arr[], int n)
{
	cout << "\nDanh sach vi tri cac phan tu chan: ";
	for(int i = 0; i < n; i++)
	{
		if(arr[i] % 2 == 0)
		{
			cout << i << " ";
		}
	}
}

int first_location_of_even(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(arr[i] % 2 == 0)
		{
			return i;
		}
	}
	return -1;
}

