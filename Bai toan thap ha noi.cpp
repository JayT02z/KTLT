#include <iostream>

using namespace std;

void Cach_chuyen(int n, char a, char b, char c)
{
	if(n == 1)
	{
		cout << a << "------->" << c << endl;
		return;
	}
	Cach_chuyen(n - 1, a, c, b);
	Cach_chuyen(1, a, b, c);
	Cach_chuyen(n - 1, b, a, c);  
}

int main ()
{
	int n;
	cout << "Nhap so dia: ";
	cin >> n;
	
	cout << "Cac buoc chuyen la: " << endl;
	Cach_chuyen(n, 'A', 'B', 'C');
	return 0; 
}
