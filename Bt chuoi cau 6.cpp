#include<iostream>
#include<string>
using namespace std;

main()
{
 int i,j,n,m,dem,max=0;
 string str;
 
 cout << "Nhap chuoi: ";
 getline (cin, str);
 for(i = 0; i < str.length(); i++)
 {
    if(str[i] != ' ')
    {
    dem = 1;
    j = i + 1;
    }
    while(str[j] != ' ' && j < str.length())
    {
        dem++;
        if(dem > max)
        {
            max = dem;
            n = i;
            m = j;
        }
        j++;
    }
 }
 
 cout << "\nTu dai nhat la: ";
 for(int i = 0; i <= m; i++)
 {
    cout << str[i];
 }
 
 return 0;
}
