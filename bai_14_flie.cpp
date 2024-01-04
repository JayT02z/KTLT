#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int arr[3];
    fstream fs;

    fs.open("Nhap_3_so_nguyen.txt", ios::out);

    if(!fs.is_open())
    {
        cout << "Khong mo duoc FILE.";
        return 1;
    }

    for(int i = 0; i < 3; i++){
         cout <<"Nhap so nguyen thu " << i + 1 << " : ";
         cin >> arr[i];
         fs << arr[i] << endl;
    }

    fs.close();

    return 0;
}
