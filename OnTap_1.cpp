#include <iostream>
using namespace std;

void Nhap_mang(int &n, int num[]);
void In_mang(int n, int num[]);
void So_chan_cuoi_cung(int n, int num[]);
void So_chan_NN(int n, int num[]);
void Tinh_tong_hangchuc5(int n, int num[]);
int So_lon_nhat(int n, int num[]);
void Tong_cac_so_lon_hon_2_gia_tri_lc(int n, int num[]);
void Tuong_quan_giua_sl_chan_le(int n, int num[]); 
void Kiem_tra_ton_tai_2_0_lien_tiep(int n, int num[]);
void Kiem_tra_mang_toan_chan(int n, int num[]);
void Mang_tang_dan(int n, int num[]);
void Mang_giam_dan(int n, int num[]);
void Them_so_vao_mang(int *n, int x, int num[]);
void Them_so_tai_vt(int *n, int vt, int x, int num[]);
void Sap_xep_le_tang(int n, int num[]);
void Sap_xep_chan_giam(int n, int num[]);
void Xoa_cac_pt_giong_nhau(int &n, int num[]);
void Dua_0_ve_dau_mang(int n, int num[]);
void Dua_chandau_0giua_lecuoi(int n, int num[]);
void Dua_pt_dang_2muk_ve_dau_mang(int n, int num[]);
bool is_dang_2muk(int n);

int show_menu(){
	int chose;
	cout << "====== MENU =====" << endl;
	cout << "1. Khoi tao mang " << endl;
	cout << "2. In mang" << endl;
	cout << "3. Tim so chan cuoi cung trong mang" << endl;
	cout << "4. Tim so chan nho nhat trong mang" << endl;
	cout << "5. Tinh tong cac gia tri co chu so hang chuc la chu so 5" << endl;
	cout << "6. Tinh tong cac gia tri lon hon 2 gia tri lan can voi no trong mang" << endl;
	cout << "7. Cho biet su tuong quan giu so luong chu so chan va chu so le trong mang" << endl;
	cout << "8. Kiem tra mang so nguyen co ton tai 2 gia tri 0 lien tiep nhau hay khong?" << endl;
	cout << "9. Kiem tra mang co ton tai toan gia tri chan hay khong?" << endl;
	cout << "Lua chon cua ban la: ";
	cin >> chose;
	
	return chose;
}

int main(){
	int N, x;
	int arr[100];
	
	while(true){
		system("cls");
		int chose = show_menu();
		
		switch(chose){
			case 1:
				Nhap_mang(N, arr);
				break;
			case 2:
				In_mang(N, arr); 
				break;
			case 3:
				So_chan_cuoi_cung(N, arr);
				break;
			case 4:
				So_chan_NN(N, arr);
				break;
			case 5:
				Tinh_tong_hangchuc5(N, arr); 
				break;
			case 6:
				Tong_cac_so_lon_hon_2_gia_tri_lc(N, arr); 
				break;
			case 7:
				Tuong_quan_giua_sl_chan_le(N, arr); 
				break;
			case 8:
				Kiem_tra_ton_tai_2_0_lien_tiep(N, arr); 
				break;
			case 9:
				Kiem_tra_mang_toan_chan(N, arr); 
				break;
			default:
				cout << "Lua chon khong hop le!!!!";
		}
		cout << "Ban co muon tiep tuc chuong trinh 1/0: ";
		bool is_continue;
		cin >> is_continue;
	
		if(!is_continue){
			break;
		}
	}
	
//	
//	Mang_tang_dan(N, arr);
//	
//	Them_so_vao_mang(&N, x, arr);
//	
//	cout << "Mang sau khi them la: ";
//	
//	In_mang(N, arr);   
	
//	cout << "Sap xep cac phan tu tai vi tri le tang va vi tri chan giam: ";
//	Sap_xep_chan_giam(N, arr);
//	Sap_xep_le_tang(N, arr);
//	In_mang(N, arr);   
//	
//	Xoa_cac_pt_giong_nhau(N, arr); 
	
//	Dua_0_ve_dau_mang(N, arr);
	
//	Dua_chandau_0giua_lecuoi(N, arr); 
	
//	Dua_pt_dang_2muk_ve_dau_mang(N, arr); 
	
	return 0; 
}

void So_chan_cuoi_cung(int n, int num[]){
	int number = -1;
	for(int i = 0; i < n; i++){
		if(num[i] % 2 == 0){
			number = num[i];
		}
	}
	cout << "So chan cuoi cung trong mang la: " << number << endl;
}

void Nhap_mang(int &n, int num[]){
	cout << "Nhap so phan tu trong mang: " ;
	cin >> n;
	
	cout << "Nhap mang: ";
	for(int i = 0; i < n; i++){
		cin >> num[i];
	}
}

void In_mang(int n, int num[]){
	for(int i = 0; i < n; i++){
		cout << num[i] << " ";
	}
	cout << endl;
}

void So_chan_NN(int n, int num[]){
	int number = -1;
	for(int i = 0; i < n; i++){
		if(num[i] % 2 == 0){
			number = num[i];
			break;
		}
	}
	
	for(int i = 0; i < n; i++){
		if(num[i] % 2 == 0){
			if(num[i] < number){
				number = num[i];
			}
		}
	}
	if(number == -1){
		cout << "Khong co gia tri chan " << number << endl;
	}
	cout << "So chan nho nhat la: " << number << endl;
}


int So_lon_nhat(int n, int num[]){
	int max = num[0];
	for(int i = 0; i < n; i++){
		if(num[i] > max){
			max = num[i];
		}
	}
	return max;
}

void Tinh_tong_hangchuc5(int n, int num[]){
	int S = 0;
	for(int i =0; i < n; i++){
		if(num[i] >= 50 && num[i] < 60){
			S += num[i];
		}
		if(num[i] >= 150){
			int bien = 0;
			bien = num[i] / 10;
			bien = bien % 10;
			if(bien == 5){
				S += num[i];
			}
		}
	}
	cout << "Tong gia tri cac chu so hang chuc la 5 trong mang la: " << S << endl;
}

void Tong_cac_so_lon_hon_2_gia_tri_lc(int n, int num[]){
	int S = 0;
	if((num[1] - num[0]) == 2){
		S += num[1];
	}
	for(int i = 1; i < n; i++){
		if((num[i - 1] - num[i]) == 2 ){
			S += num[i - 1];
		}
		if((num[i + 1] - num[i]) == 2){
			S += num[i + 1];
		}
	}
	cout << "Tong cac gia tri lon hon 2 lan can trong mang la: " << S << endl;
}

void Tuong_quan_giua_sl_chan_le(int n, int num[]){
	cout << "Tuong quan giua so luong so chan va so le: " ;
	int count_le = 0;
	int count_chan = 0;
	for(int i = 0; i < n; i++){
		if(num[i] % 2 == 0){
			count_chan += 1;
		}
		else{
			count_le += 1;
		}
	}
	if(count_chan > count_le){
		cout << -1 << endl;
	}
	if(count_chan == count_le){
		cout << 0 << endl;
	}
	if(count_chan < count_le){
		cout << 1 << endl;
	}
}

void Kiem_tra_ton_tai_2_0_lien_tiep(int n, int num[]){
	cout << "Ton tai 2 so 0 lien tiep: ";
	for(int i = 0; i < n - 1; i++){
		if(num[i] == 0 && num[i + 1] == 0){
			cout << 1 << endl;
			return;
		}
	}
	cout << 0 << endl;
}

void Kiem_tra_mang_toan_chan(int n, int num[]){
	cout << "Mang co ton tai toan gia tri chan: ";
	
	for(int i = 0; i < n; i++){
		if(num[i] % 2 != 0){
			cout << 0 << endl;
			return;
		}
	}
	cout << 1 << endl;
}

void Mang_tang_dan(int n, int num[]){
	for(int i = n - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(num[j] > num[j + 1]){
				int tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp; 
			}
		}
	}
}

void Mang_giam_dan(int n, int num[]){
	for(int i = n - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(num[j] < num[j + 1]){
				int tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp; 
			}
		}
	}
}

void Them_so_vao_mang(int* n, int x, int num[]){
	cout << "Nhap so muon them: ";
	cin >> x;
	
	int i;
	for(i = 0; i < *n; i++){
		if(x <= num[i]){
			Them_so_tai_vt(n, i, x, num);
			return;
		}
	}
	(*n) ++;
	num[i] = x;
}

void Them_so_tai_vt(int* n, int vt, int x, int num[]){
	(*n)++;
	int i;
	for(i = *n - 1; i > vt; i--){
		num[i] = num[i - 1];
	}
	num[i] = x;
}

void Sap_xep_le_tang(int n, int num[]){
	int i, j;
	for(i = 0; i < n - 1 ; i++){
		for(j = i + 1; j < n; j++){
			if(num[i] > num[j] && num[i] % 2 != 0 && num[j] % 2 != 0){
				int tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
}

void Sap_xep_chan_giam(int n, int num[]){
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(num[i] < num[j] && num[i] % 2 == 0 && num[j] % 2 == 0){
				int tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
}

void Xoa_cac_pt_giong_nhau(int &n, int num[]){
	int i, j, k;
	for(i = 1; i < n; i++){
		for(j = 0; j < i; j++){
			if(num[i] == num[j]){
				for(k = i; k < n; k++){
					num[k] = num[k + 1];
					i--;
				}
				n--;
			}
		}
	}
	cout << "Mang sau khi xoa la: ";
	In_mang(n, num); 
}

void Dua_0_ve_dau_mang(int n, int num[]){
	int tmp, i;
	int j = 0; 
	for(i = 0; i < n; i++){
		if(num[i] == 0){
			tmp = num[i];
			num[j] = tmp;
			num[i] = num[j]; 
			j++; 
		}
	}
	cout << "Mang sau khi dua 0 ve dau la: ";
	In_mang(n, num); 
}

void Dua_chandau_0giua_lecuoi(int n, int num[]){
	int tmp, i;
	int vitricuoi = 0;
	for(i = 0; i < n; i++){
		if(num[i] != 0 && num[i] % 2 == 0){
			tmp = num[i];
			for(int j = i; j > 0; j--){
				num[j] = num[j - 1];
			}
			num[0] = tmp;
		}
	}
	
	for(i = 0; i < n; i++){
		if(num[i] % 2 != 0){
			vitricuoi = 1;
			break;
		}
	}
	
	for(i; i < n; i++){
		if(num[i] == 0){
			for(int j = i; i > vitricuoi; i--){
				num[j] = num[j - 1];
			}
			num[vitricuoi] = 0;
		}
	}
	cout << "Mang sau khi chuyen la: ";
	In_mang(n, num); 
}

void Dua_pt_dang_2muk_ve_dau_mang(int n, int num[]){
	int tmp, i;
	for(i = 0; i < n; i++){
		if(is_dang_2muk(num[i])){
			tmp = num[i];
			for(int j = i; j > 0; j--){
				num[j] = num[j - 1];
			}
			num[0] = tmp;
		}
	}
	cout << "Mang sau khi dua phan tu dang 2^k len dau la: ";
	In_mang(n, num); 
}

bool is_dang_2muk(int n){
	int du;
	while(n >= 1){
		du = n % 2;
		if(du != 0){
			return false;
		}
		n = n / 2;
		if(n == 1){
			break;
		}
	}
	return true;
}
















