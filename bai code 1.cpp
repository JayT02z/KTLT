#include <iostream>
using namespace std;
// xay dung ham kiemr tra so nguyen to (1: la so nguyen to ; 0: k la so nguyen to)
int SNT(int m);
int main ()
{ 
	int n, count = 0, total = 0;
	cout << "Nhap so nguyen duong:";
	cin >> n;
	//xuat cac so nguyen to nho hon n
	for(int i=1; i < n; i++)
		if (SNT(i)==1)
			{
				cout << i <<" la SNT" << endl;
				count ++;
				total += i;
			}
			if (count > 0)
				cout << "Trung binh cong cac SNT la:" << (float) total / count;
	
	return 0;
}
int SNT(int m)
{
	int flag = 1;
	int i = 2;
	if (m==1)
		flag = 0;
	while (flag && (i<m))
		{
			if (m%i == 0)
				flag = 0;
			i ++;
		}
	return flag;
}
