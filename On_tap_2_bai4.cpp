#include <bits/stdc++.h>
using namespace std;
struct hocvien{
    int maso;
    string ho;
    string ten;
    float diem_c;
    float diem_c_sharp;
    float diem_tb;
    string phai;
    string ket_qua;
};

bool c(hocvien a, hocvien b)
{
    return a.diem_tb > b.diem_tb;
}

void nhap(int &n, hocvien *p)
{
    cout<<"Cho biet so hoc vien: ";
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cout<<"Thong hoc vien thu "<<i+1<<" la: "<<endl;
        cout<<"ma so la: ";
        cin>>p[i].maso;
        cout<<"Ho la: "<<endl;
        cin>>p[i].ho;
        cout<<"Ten la: "<<endl;
        cin>>p[i].ten;
        cout<<"nhap gioi tinh: "<<endl;
        cin>>p[i].phai;
        cout<<"diem mon C la: "<<endl;
        cin>>p[i].diem_c;
        cout<<"diem mon C sharp la: "<<endl;
        cin>>p[i].diem_c_sharp;
    }
}

float diem(int n, hocvien *p)
{
    for(int i = 0;i < n; i++)
    {
        p[i].diem_tb = (p[i].diem_c*2 + p[i].diem_c_sharp*3)/3;
    }
}

string ket_qua(int n, hocvien *p)
{
    for(int i = 0; i < n; i++)
    {
        if(p[i].diem_tb >= 5)
        {
            p[i].ket_qua = "Dau";
        }
        else
        {
            if(p[i].diem_tb == 4 && p[i].phai == "Nu")
            {
                p[i].ket_qua = "Dau";
            }
            else
            {
                p[i].ket_qua = "Rot";
            }
        }
    }
}

void duyet1(int &n, hocvien *p)
{
    string s;
    cout<<"nhap ten can tim: ";
    cin>>s;
    for(int i = n-1; i >= 0;i-- )
    {
        if(p[i].ten == s)
        {
            cout<<setw(3)<<"Ma so"<<setw(10)<<"Ten"<<endl;
			cout<<setw(3)<<p[i].maso<<setw(10)<<p[i].ten<<endl;
            return;
        }
    }cout<<"khong tim thay";
    
}
void duyet2(int &n, hocvien *p)
{
    string s;
    cout<<"nhap ten can tim: ";
    cin>>s;
    for(int i = 0; i <= n;i++ )
    {
        if(p[i].ten == s)
        {
            int count;
			cout<<setw(3)<<"Ma so"<<setw(10)<<"Ten"<<endl;
			cout<<setw(3)<<p[i].maso<<setw(10)<<p[i].ten<<endl;
			count += 1;
            if(i == 1)
			{
				break;
			}
        }
	}
	return;
}
void duyet3(int &n, hocvien *p)
{
    string s;
    cout << "nhap ten can tim: ";
    cin >> s;
    int first = -1, last = -1;
    for (int i = 0; i < n; i++)
    {
        if (p[i].ten == s)
        {
            if (first == -1) first = i;
            last = i;
        }
    }
    if (first != -1 && last != -1)
    {
        cout << setw(3) << "Ma so" << setw(10) << "Ten" << endl;
        cout << setw(3) << p[first].maso << setw(10) << p[first].ten << endl;
        cout << setw(3) << p[last].maso << setw(10) << p[last].ten << endl;
    }
    else
    {
        cout << "khong tim thay";
    }
}
void xuat(int n, hocvien *p)
{
    cout<<setw(5)<<"STT"<<setw(10)<<"MA SO"<<setw(10)<<"Ho"<<setw(10)<<"Ten"<<setw(10)<<"diem C"<<setw(10)<<"diem C#"<<setw(20)<<"Diem trung binh"<<setw(20)<<"Ket qua"<<endl;

    for(int i = 0; i < n; i++)
    {
        cout<<setw(5)<<i+1<<setw(10)<<p[i].maso<<setw(10)<<p[i].ho<<setw(10)<<p[i].ten<<setw(10)<<p[i].diem_c<<setw(10)<<p[i].diem_c_sharp<<setw(20)<<p[i].diem_tb<<setw(20)<<p[i].ket_qua<<endl;

    }
}

int main()
{
    int n;
    hocvien* danhsachhocvien = new hocvien[100000];
    nhap(n, danhsachhocvien);
    diem(n, danhsachhocvien);
    ket_qua(n, danhsachhocvien);
    sort(danhsachhocvien, danhsachhocvien + n, c);
    xuat(n, danhsachhocvien);
    duyet1(n, danhsachhocvien);
    cout<<"duyet lan 2"<<endl;
    cout<<endl;
    duyet2(n, danhsachhocvien);
    cout<<"duyet lan 3"<<endl;
	cout<<endl;
	duyet3(n, danhsachhocvien);
	return 0;
}
