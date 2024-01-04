#include <iostream>
#include <string>
using namespace std;
int main ()
{
//	string str;
//	cout << "Nhap chuoi: ";
//	getline(cin, str);
//	
//	while (str[0] == ' ')
//	{
//		str.erase(0, 1);
//	}
//	
//	while (str[str.length() - 1] == ' ' )
//	{
//		str.erase(str.length() - 1, 1);
//	}
//	
//	cout << "Ket qua: " << str;


//	string str;
//	cout << "Nhap chuoi: ";
//	getline(cin, str);
//	
//	int i = 0;
//	while (i < str.length())
//	{
//		if (str[i] == ' ' && str[i + 1] == ' ')
//		{
//			str.erase(i, 1);
//		}
//		else
//		{
//			i++;
//		}
//	}


	string str;
	cout << "Nhap chuoi: ";
	getline(cin, str);
	
	for(int i = 0; i< str.length(); i++)
	{
		str[i] = tolower(str[i]);
	}
	
	if(str[0] != ' ')
	{
		str[0] = toupper(str[0]);
	}
	
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] == ' ' && str[i + 1] != ' ')
		{
			str[i + 1] = toupper(str[i + 1]);
		}
	}
	
	
	cout << "Ket qua: " << str;
	
	return 0;
}
