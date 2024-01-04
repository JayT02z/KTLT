#include <iostream>
#include <string>

using namespace std;
void chu_thuong(string normal);
void chu_hoa(string normal);
void chu_hoa_dau_tu(string normal);
void chuan_hoa_chuoi(string normal);

int main()
{
	string str;
	cout << "Nhap chuoi: ";
	getline(cin, str);
	
	cout << "Chuoi sau khi bien doi thanh chu thuong: ";
	chu_thuong(str); 
	
	cout << "\nChuoi sau khi bien doi thanh chu hoa: ";
	chu_hoa(str);
	
	cout << "\nChuoi sau khi viet hoa cac ky tu dau tien: ";
	chu_hoa_dau_tu(str);
	
	cout << "\nChuoi sau khi chuan hoa: ";
	chuan_hoa_chuoi(str);
	
	return 0;
}

void chu_thuong(string normal)
{
	for(int i = 0; i < normal.length(); i++)
	{
		if(normal[i] >= 65 && normal[i] <= 90)
		{
			normal[i] += 32;
		}
	}
	
	cout << normal;
}

void chu_hoa(string normal)
{
    for(int i = 0; i < normal.length(); i++)
	{
		if(normal[i] >= 97 && normal[i] <= 122)
		{
			normal[i] -= 32;
		}
	}
	cout << normal;
}

void chu_hoa_dau_tu(string normal)
{
    for(int i = 0; i < normal.length(); i++)
    {
        if(normal[i] >= 65 && normal[i] <= 90)
		{
			normal[i] += 32;
		}
    }
    if(normal[0] != ' ')
    {
        normal[0] -= 32;
    }
    for(int i = 0; i < normal.length(); i++)
    {
        if(normal[i] == ' ' && normal [i + 1] != ' ')
        {
            normal[i] -= 32;
        }
    }
    cout << normal;
}

void chuan_hoa_chuoi(string normal)
{
    int i = 0;
    while(i < normal.length())
    {
        if(normal[i] == ' ' && normal[i + 1] == ' ')
        {
            normal.erase(i, 1);
        }
        else
        {
            i++;
        }
    }
    cout << normal;
}
