#include <iostream>
#include <string>

using namespace std;
void Trich_n_kt_dau(string kt, int n, int index);
void Trich_n_kt_cuoi(string kt, int n, int index);

int main()
{
	int n, index;
	string str;
	cout << "Nhap chuoi: ";
	getline(cin, str);
	
	cout << "So ki tu muon trich: ";
	cin >> n;
	
	cout << "Vi tri muon trich: ";
	cin >> index;
	
	cout << "\n" << n << " Ki tu dau: ";
	Trich_n_kt_dau(str, n, index);
	
    cout << "\n" << n << " Ki tu cuoi: ";
	Trich_n_kt_cuoi(str, n, index);
	
	return 0;
}
void Trich_n_kt_dau(string kt, int n, int index)
{
    for(int i = index; i <= n + index; i++)
    {
        cout << kt[i];
    }
}
void Trich_n_kt_cuoi(string kt, int n, int index)
{
    for(int i = kt.length() - n; i < kt.length(); i++)
    {
        cout << kt[i];
    }
}

