#include <iostream>
#include <fstream>

using namespace std;

void Tao_file(){
	int n, arr[100];
	fstream fs;
	
	fs.open("Tap_chua_sap.txt", ios::out);
	
	if(!fs.is_open()){
		cout << "Mo file that bai!";
	} 
	
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	
	for(int i = 0; i < n; i++){
         cout <<"Nhap so nguyen thu " << i + 1 << " : ";
         cin >> arr[i];
         fs << arr[i] << " ";
    }

    fs.close();
}

int main(){
	Tao_file();
	int arr[100], n;
    fstream fs;
    
    fs.open("Tap_chua_sap.txt", ios::in);
    
    n = -1;
	for(int i = 0; i < 100; i++){
		if(fs.eof()){
			break;
		}
		n += 1;
		fs >> arr[i];
	}
	
	fs.close();
	
	fs.open("Tap_da_sap.txt", ios::out);
	
	for(int i = n - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(arr[j] > arr[j + 1]){
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	
	fs << n << endl;
	for(int i = 0; i < n; i++){
		fs << arr[i] << " ";
	}
	return 0;
}
