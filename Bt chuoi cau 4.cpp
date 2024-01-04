#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cout << "Nhap chuoi: ";
	getline(cin, str);
	
    int i = 0;
    int count = 0;
    if(str[str.length() - 1] != ' ')
    {
        count += 1;
        
    }
    while(i < str.length())
    {
        if(str[i] != ' ' && str[i + 1] == ' ')
        {
            count += 1;
        }
            i++;
    }
	
	cout << "So tu: " << count;
	
	return 0;
}
