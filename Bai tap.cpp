#include <iostream>
#include <math.h>

using namespace std;

struct Point_in_xOy
{
	float Ox;
	float Oy;
};

void input_point(Point_in_xOy &point);
void output_point(Point_in_xOy point);
void test(Point_in_xOy point);
void tinh_khoang_cach_2_diem(Point_in_xOy point_1, Point_in_xOy point_2);
void tim_diem_doi_xung(Point_in_xOy point);


int main()
{
	Point_in_xOy diem_1;
	Point_in_xOy diem_2;
	input_point(diem_1);
	output_point(diem_1); 
	test(diem_1);
	tinh_khoang_cach_2_diem(diem_1, diem_2);
	tim_diem_doi_xung(diem_1);
	
	return 0;     
}

void input_point(Point_in_xOy &point)
{
	cout << "Nhap toa do Ox: ";
	cin >> point.Ox;
	cout << "Nhap toa do Oy: ";
	cin >> point.Oy;
}

void output_point(Point_in_xOy point)
{
	cout << "\nToa do cua diem A vua nhap la: " << "(" << point.Ox << "," << point.Oy << ")";
}
void test(Point_in_xOy point)
{
	if(point.Ox == 0 && point.Oy != 0)
	{
		cout << "\nDiem A nam tren truc tung";
	}
	if(point.Oy == 0 && point.Ox != 0)
	{
		cout << "\nDiem A nam tren truc hoanh";
	}
	if(point.Oy == 0 && point.Ox == 0)
	{
		cout << "\nDiem A nam o goc toa do";
	}
	if(point.Ox != 0 && point.Oy != 0)
	{
		cout << "\nDiem A k nam tren truc tung/truc hoanh";
	}
}
void tinh_khoang_cach_2_diem(Point_in_xOy point_1, Point_in_xOy point_2)
{
	cout << "\nNhap toa do diem B: " << endl;
	input_point(point_1);
	
	cout << "\nNhap toa do diem C: " << endl;
	input_point(point_2); 
	
	double khoang_cach;
	khoang_cach = sqrt(pow(point_1.Ox - point_2.Ox, 2) + pow(point_1.Oy - point_2.Oy, 2));
	
	cout << "\nKhoang cach giua 2 diem B va C la: " << khoang_cach;
}
void tim_diem_doi_xung(Point_in_xOy point)
{
	point.Ox = -point.Ox;
	cout << "\nDiem doi xung cua A qua truc tung la: " << "(" << point.Ox << "," << point.Oy << ")";
	
	point.Oy = -point.Oy;
	point.Ox = -point.Ox;
	cout << "\nDiem doi xung cua A qua truc hoanh la: " << "(" << point.Ox << "," << point.Oy << ")";
}
