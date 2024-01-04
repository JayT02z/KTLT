#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int n;
    do
    {
    	cout << "Nhap so luong mat hang: ";
    	cin >> n;
	}
	while (n < 0 || n > 25);
    string ten_hang[n];
    int so_luong[n];
    int don_gia[n];
    float ty_le_giam[n];
    double thanh_tien[n];

    for (int i = 0; i < n; i++) 
	{
        cout << "Nhap mat hang thu  " << i + 1 << ":" << endl;
        cout << "Ten hang: ";
        cin.ignore();
        getline(cin, ten_hang[i]);
        cout << "So luong: ";
        cin >> so_luong[i];
        cout << "Don gia: ";
        cin >> don_gia[i];
    }
	
	int total = 0;
    for (int i = 0; i < n; i++) 
	{
        if (so_luong[i] > 200) 
		{
            ty_le_giam[i] = 0.1;
        } 
		else if (so_luong[i] > 100) 
		{
            ty_le_giam[i] = 0.05;
        } 
		else if (so_luong[i] > 50) 
		{
            ty_le_giam[i] = 0.03;
        } 
		else 
		{
            ty_le_giam[i] = 0.0;
        }

        thanh_tien[i] = so_luong[i] * don_gia[i] * (1 - ty_le_giam[i]);
        total += thanh_tien[i];
    }

    cout << "STT	Ten hang	So luong	Don gia		Ty le giam	Thanh tien" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "\t"<< ten_hang[i] << "\t" << "\t" << so_luong[i]<< "\t" << "\t" << don_gia[i]
             << "\t" << "\t" << ty_le_giam[i] 
             << "\t" << "\t" << thanh_tien[i] << endl;
    }
    
    cout << "\t" << "\t" <<"\t" <<"\t" <<"\t" << "\t" << "\t" << "\t" <<"Tong Cong: " << total;
	
	for(int i = 0; i < n; i++)
	{
		if(so_luong[i] > so_luong[i + 1])
		{
			int tmp = so_luong[i];
			so_luong[i] = so_luong[i + 1];
			so_luong[i + 1] = tmp;
		}
	}
	
	cout << "\nBang sau khi sap xep:" << endl;
	cout << "STT	Ten hang	So luong	Don gia		Ty le giam	Thanh tien" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "\t"<< ten_hang[i] << "\t" << "\t" << so_luong[i]<< "\t" << "\t" << don_gia[i]
             << "\t" << "\t" << ty_le_giam[i] 
             << "\t" << "\t" << thanh_tien[i] << endl;
    }
    
    cout << "\t" << "\t" <<"\t" <<"\t" <<"\t" << "\t" << "\t" << "\t" <<"Tong Cong: " << total;
    return 0;
}
