#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

struct Student
{
	int ma_so;
	string name, sex;
	float score_1;
	float score_2;
	
};

void Nhap_danh_sach(Student *p, int &n);
void In_danh_sach_MS(Student *p, int n);
void In_danh_sach_HvaT(Student *p, int n);
void Tim_vi_tri_hs(Student *p, int n);
void In_dtb_duoi5(Student *p, int n);
void Them_hs(Student* &p, int &n);
void Xoa_hs(Student* &p, int &n);
bool cmp(Student a, Student b);
bool cmp2(Student a, Student b);

int show_menu(){
	int chose;
	cout << "====== MENU =====" << endl;
	cout << "1. Nhap danh sach hoc sinh" << endl;
	cout << "2. In danh sach theo ma so" << endl;
	cout << "3. In danh sach theo ho va ten" << endl;
	cout << "4. Tim vi tri cua hoc sinh" << endl;
	cout << "5. In danh sach hoc sinh co dtb duoi 5" << endl;
	cout << "6. Them mot hoc sinh " << endl;
	cout << "7. Xoa mot hoc sinh " << endl;
	cout << "Lua chon cua ban la: ";
	cin >> chose;
	
	return chose;
}
int main()
{
	Student *students = new Student[100];
	int N ;
	while(true){
		system("cls");
		int chose = show_menu();
		
		switch(chose){
			case 1:
				Nhap_danh_sach(students, N); 
				break;
			case 2:
				In_danh_sach_MS(students, N); 
				break;
			case 3:
				In_danh_sach_HvaT(students, N);
				break; 
			case 4:
				Tim_vi_tri_hs(students, N);
				break;
			case 5:
				In_dtb_duoi5(students, N);
				break; 
			case 6:
				Them_hs(students, N);
				break;
			case 7:
				Xoa_hs(students, N);
				break; 
			default:
				cout << "lua chon khong hop le!"; 
		}
		
		cout << "Ban co muon tiep tuc chuong trinh 1/0: ";
		bool is_continue;
		cin >> is_continue;
	
		if(!is_continue){
			break;
		}
	}
	 
	
	return 0;   
}

void Nhap_danh_sach(Student *p, int &n)
{
	do
	{
		cout << "Nhap so luong hoc sinh: ";
		cin >> n;
	} while (n > 50);
	for(int i = 0; i < n; i++)
	{
		system("cls");
		cout << "Thong tin hoc sinh thu " << i + 1 << " la:" << endl;
		cout << "\nNhap ma so: " ;
		cin >> p[i].ma_so;
		cout << "Nhap ho va ten: ";
		cin.ignore();
		getline(cin, p[i].name);
		cout << "Nhap gioi tinh: ";
		cin >> p[i].sex;
		cout << "Nhap diem hkI: ";
		cin >> p[i].score_1;
		cout << "Nhap diem hkII: ";
		cin >> p[i].score_2;
	}
}


bool cmp(Student a, Student b){
    return a.ma_so < b.ma_so;
}
void In_danh_sach_MS(Student *p, int n){
    sort(p, p + n, cmp);
    cout<<setw(3)<<"ST"<<setw(15)<<"Ho va Ten"<<endl;
	for(int i; i < n; i++)
	{
		cout<<setw(3)<<i+1<<setw(15)<<p[i].name<<endl;
	}
}

bool cmp2(Student a, Student b){
	return a.name < b.name;
}

void In_danh_sach_HvaT(Student *p, int n){
	sort(p, p + n, cmp);
	cout<<setw(3)<<"STT"<<setw(10)<<"MA SO"<<setw(15)<<"Ho va Ten"<<setw(15)<<"Phai"<<setw(15)<<"Diem HKI"<<setw(15)<<"Diem HKII"<<endl;
	for(int i; i < n; i++)
	{
		cout<<setw(3)<<i+1<<setw(10)<<p[i].ma_so<<setw(15)<<p[i].name<<setw(15)<<p[i].sex<<setw(15)<<p[i].score_1<<setw(15)<<p[i].score_2<<endl;
	
	}
}


void Tim_vi_tri_hs(Student *p, int n){
	string s;
	cout << "\nNhap Ho va Ten can tim: ";
	getline(cin, s);
	for(int i = n - 1; i >= 0; i--){
		if(p[i].name == s){
			cout << p[i].ma_so << " " << p[i].name << endl;
			return;
		}
	}
	cout << "Khong tim thay!!";
}

void In_dtb_duoi5(Student *p, int n){
	cout<<setw(3)<<"STT"<<setw(10)<<"MA SO"<<setw(15)<<"Ho va Ten"<<setw(15)<<"Phai"<<setw(15)<<"Diem HKI"<<setw(15)<<"Diem HKII"<<endl;
	for(int i = 0; i < n; i++){
		float dtb = (p[i].score_1 + p[i].score_2 *2)/3;
		if(dtb < 5){
			cout<<setw(3)<<i+1<<setw(10)<<p[i].ma_so<<setw(15)<<p[i].name<<setw(15)<<p[i].sex<<setw(15)<<p[i].score_1<<setw(15)<<p[i].score_2<<endl;
		}
	}
}

void Them_hs(Student* &p, int &n){
	cout << "Nhap thong tin hoc sinh moi: " << endl;
	cout << "Nhap ma so: " ;
	cin >> p[n].ma_so;
	cout << "Nhap ho va ten: ";
	cin.ignore();
	getline(cin, p[n].name);
	cout << "Nhap gioi tinh: ";
	cin >> p[n].sex;
	cout << "Nhap diem hkI: ";
	cin >> p[n].score_1;
	cout << "Nhap diem hkII: ";
	cin >> p[n].score_2;
	n++;
	
}

void Xoa_hs(Student* &p, int &n){
	string deleted_name;
	cout << "Nhap Ho va Ten hoc sinh can xoa: ";
	cin.ignore();
	getline(cin, deleted_name);
	
	int deleted_index = -1;
	for(int i = 0; i < n; i++){
		if(!deleted_name.compare(p[i].name)){
			deleted_index = i;
		}
	}
	
	if(deleted_index == -1){
		cout << "Khong tim thay hoc sinh!" << endl;
		return;
	}
	
	for(int i = deleted_index; i < n - 1; i++){
		p[i] = p[i + 1];
	}
	n--;
	
	Student *tmp_p = new Student[n];
	for(int i = 0; i < n; i++){
		tmp_p[i] = p[i];
	}
	
	delete[] p;
	p = tmp_p;
	
	cout << "Xoa thanh cong!";
}
