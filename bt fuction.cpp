#include <iostream> 
#include <math.h>

using namespace std;

int sum(int n);
bool is_prime(int n);

int main ()
{
	int n;
	cout << "n = ";
	cin >> n;
	
	cout << "ket qua: " << sum(n);
	
//	if(is_prime(n) == true)
//	{
//		cout << n << " la so nguyen to";
//	}
//	else
//	{
//		cout << n << " khong la so nguyen to";
//	}
	return 0;
}

bool is_prime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return false;
			break;
		}
	}
	return true;
}

int sum(int n)
{
	if(n == 2)
	{
		return 2;
	}
	if(is_prime(n))
	{
		return n + sum(n - 1);
	}
	return sum(n - 1);
}

