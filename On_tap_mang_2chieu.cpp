#include <iostream>
#include <math.h>
using namespace std;
#define MAXC 100
#define MAXD 50

void nhap_mang(int &n, int &m, int num[][MAXC]);
void xuat_mang(int n, int m, int num[][MAXC]);
int timkiem(int n, int m, int num[][MAXC], int x);
int is_prime(int n);
int kiem_tra_mang(int n, int m, int num[][MAXC]);
int tong_dong(int m, int num[][MAXC], int d);
int tong_cot(int n, int num[][MAXC], int c);
int tong_DCchinh(int n, int num[][MAXC]);
int tong_DCphu(int n, int num[][MAXC]);
int nuatrenDCchinh(int n, int m, int num[][MAXC]);
int nuaduoiDCchinh(int n, int m, int num[][MAXC]);
int nuatrenDCphu(int n, int m, int num[][MAXC]);
int nuaduoiDCphu(int n, int m, int num[][MAXC]);
void tinh_tong(int n, int m, int num[][MAXC]);
int tim_max(int n, int m, int num[][MAXC]);
int tim_min(int n, int m, int num[][MAXC]);

int main(){
	int N, M, x;
	int arr[MAXD][MAXC];
	
	nhap_mang(N, M, arr);
	xuat_mang(N, M, arr); 
	
	cout << "Nhap so can tim: ";
	cin >> x;
	cout << "Co so can tim trong mang hay khong? " << timkiem(N, M, arr, x);
	
	tinh_tong(N, M, arr); 
	
	cout << "Gia tri lon nhat cua mang: " << tim_max(N, M, arr) << endl;
	cout << "Gia tri nho nhat cua mang: " << tim_min(N, M, arr) << endl;
}

void nhap_mang(int &n, int &m, int num[][MAXC]){
	cout << "Nhap so dong cua ma tran: ";
	cin >> n;
	cout << "Nhap so cot cua ma tran: ";
	cin >> m;
	
	cout << "Nhap ma tran: " << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> num[i][j];
		}
	}
}

void xuat_mang(int n, int m, int num[][MAXC]){
	cout << "Ma tran da nhap:" << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << num[i][j] << " ";
		}
		cout << endl;
	}
}

int timkiem(int n, int m, int num[][MAXC], int x){
	int i, j;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(num[i][j] == x){
				return 1;
			}
		}
	}
	return 0;
}

int is_prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int kiem_tra_mang(int n, int m, int num[][MAXC]){
	int i, j, dem = 0;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(is_prime(num[i][j]) == 0 ){
				return 0;
			}
		}
	}
	return 1;
}

int tong_dong(int m, int num[][MAXC], int d){
	int tong = 0;
	for(int j = 0; j < m; j++){
		tong += num[d][j];
	}
	return tong;
}

int tong_cot(int n, int num[][MAXC], int c){
	int tong = 0;
	for(int i = 0; i < n; i++){
		tong += num[i][c];
	}
	return tong;
}

int tong_DCchinh(int n, int num[][MAXC]){
	int tong = 0;
	for(int i = 0; i < n; i++){
		tong += num[i][i];
	}
	return tong;
}

int tong_DCphu(int n, int num[][MAXC]){
	int tong = 0;
	for(int i = 0; i < n; i++){
		tong += num[i][n - 1 - i];
	}
	return tong;
}

int nuatrenDCchinh(int n, int m, int num[][MAXC]){
	int tong = 0; 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(i < j){
				tong += num[i][j];
			}
		}
	}
	return tong;
}

int nuaduoiDCchinh(int n, int m, int num[][MAXC]){
	int tong = 0; 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(i > j){
				tong += num[i][j];
			}
		}
	}
	return tong;
}

int nuatrenDCphu(int n, int m, int num[][MAXC]){
	int tong = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(i + j < (n - 1)){
				tong += num[i][j];
			}
		}
	}
	return tong;
}

int nuaduoiDCphu(int n, int m, int num[][MAXC]){
	int tong = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(i + j > (n - 1)){
				tong += num[i][j];
			}
		}
	}
	return tong;
}

void tinh_tong(int n, int m, int num[][MAXC]){
	cout << "Tong cac dong cua ma tran:" << endl;
	for(int i = 0; i < n; i++){
		cout << "Dong " << i << " = " << tong_dong(m, num, i) << endl; 
	}
	
	cout << "Tong cac cot cua ma tran:" << endl;
	for(int j = 0; j < m; j++){
		cout << "Cot " << j << " = " << tong_cot(n, num, j) << endl; 
	}
	
	if(n == m){
	
	cout << "Tong cac gia tri tren DC chinh cua mang = " << tong_DCchinh(n, num) << endl;
	
	cout << "Tong cac gia tri tren DC phu cua mang = " << tong_DCphu(n, num) << endl;
	
	cout << "Tong cac gia tri nua tren DC chinh = " << nuatrenDCchinh(n, m, num) << endl;
	
	cout << "Tong cac gia tri nua duoi DC chinh = " << nuatrenDCphu(n, m, num) << endl;
	
	cout << "Tong cac gia tri nua tren DC phu = " << nuatrenDCphu(n, m, num) << endl;
	
	cout << "Tong cac gia tri nua duoi DC phu = " << nuaduoiDCphu(n, m, num) << endl; 
	
	}
}

int tim_max(int n, int m, int num[][MAXC]){
	int max = num[0][0];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(num[i][j] > max){
				max = num[i][j];
			}
		}
	}
	return max;
}

int tim_min(int n, int m, int num[][MAXC]){
	int min = num[0][0];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(num[i][j] < min){
				min = num[i][j];
			}
		}
	}
	return min;
}





