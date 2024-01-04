#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cout << "Nhap chuoi: ";
	getline(cin, str);
	
    int i = 0;
    while(i < str.length())
    {
    	if(str[i] != ' ')
    	{
    		cout << str[i];
    		i++;
		}
		else
		{
			i++;
			cout << endl;
		}
	}
	
	return 0;
}
