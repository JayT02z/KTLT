#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string str;
	cout << "Nhap chuoi: ";
	getline(cin, str);
	
    int i = 0;
    while(i < str.length())
    {
        if(str[i] == ' ')
        {
            str.erase(i, 1);
        }
        else
        {
            i++;
        }
    }
	
	cout << "Chuoi sau khi xoa khoang trang la: " << str;
	
	return 0;
}
