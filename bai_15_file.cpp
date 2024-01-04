#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int Pt_bac_2(int a, int b, int c){
	int delta;
	delta = b*b - 4*a*c;
	if(delta < 0){
		return -1;
	}
	if(delta = 0){
		return 0;
	}
	if(delta > 0){
		return 1;
	}
}

void Nghiem_kep(int a, int b, int c){
	int x = -b/(2*a);
	cout << "x = " << x;
}

void Nghiem_pb(int a, int b, int c){
	int delta, x1, x2;
	delta = b*b - 4*a*c;
	x1 = (-b + sqrt(delta))/(2*a);
	x2 = (-b - sqrt(delta))/(2*a);
	
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2;
}

int main(){
	int arr[3];
	fstream fs;

    fs.open("Nhap_3_so_nguyen.txt");

    if(!fs.is_open())
    {
        cout << "Khong mo duoc FILE.";
        return 1;
    }
    
    for(int i = 0; i < 3; i++){
    	fs >> arr[i];
	}
	
	fs.close();
	
	fs.open("Nghiem_pt_bac2.txt", ios::out);
	
	if(!fs.is_open())
    {
        cout << "Khong mo duoc FILE.";
        return 1;
    }
	
	if(Pt_bac_2(arr[0], arr[1], arr[2]) == -1){
		fs << "Pt vo nghiem";
	}
	
	if(Pt_bac_2(arr[0], arr[1], arr[2]) == 0){
		int x = -arr[1]/(2*arr[0]);
		fs << "Pt co nghiem kep la: " << endl;
		fs << "x = " << x;
	}
	
	if(Pt_bac_2(arr[0], arr[1], arr[2]) == 1){
		int delta, x1, x2;
		delta = arr[1]*arr[1] - 4*arr[0]*arr[2];
		x1 = (-arr[1] + sqrt(delta))/(2*arr[0]);
		x2 = (-arr[1] - sqrt(delta))/(2*arr[0]);
		fs << "Pt co 2 nghiem pb la: " << endl;
		fs << "x1 = " << x1 << endl;
		fs << "x2 = " << x2;  
	}
	
	return 0;
}
