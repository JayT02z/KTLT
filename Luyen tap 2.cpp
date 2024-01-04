#include <iostream>
using namespace std;
int main ()
{
	char chu_thuong;
	cout << "nhap chu cai viet thuong: ";
	cin >> chu_thuong;
	cout << "chu cai viet hoa: " << (char) (chu_thuong - 32) <<endl;
	return 0;
}
