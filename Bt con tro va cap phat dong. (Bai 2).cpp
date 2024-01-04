#include <iostream>
#include <string>

using namespace std;
void input_interger(string label, int &n);
void input_array(int *arr, int size);
void output_array(int *arr, int size);
void element_delete(int* &arr, int &size, int element);

int main ()
{
	int n, x;
	input_interger("n = ", n);
	 
	int *numbers = new int[n];
	cout << "Nhap mang: ";
	input_array(numbers, n);
	
	input_interger("x = ", x); 
	element_delete(numbers, n, x);
	
	cout << "Mang sau khi xoa: ";
	output_array(numbers, n); 
	
	return 0;
}

void input_interger(string label, int &n)
{
	cout << label;
	cin >> n;
}


void input_array(int *arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}


void output_array(int *arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
void element_delete(int* &arr, int &size, int element)
{
	//Xoa phan tu can xoa tren mang cu
	for(int i = element; i < size - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	
	//tao mang moi
	int new_size = size - 1;
	int *new_arr = new int[new_size];
	
	//copy du lieu mang cu sang mang moi
	for(int i = 0; i < new_size; i++)
	{
		new_arr[i] = arr[i];
	}
	
	//gan mang moi cho mang va giam size di -1
	delete[] arr;
	arr = new_arr;
	size = new_size;
}
