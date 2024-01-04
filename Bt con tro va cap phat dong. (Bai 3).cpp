#include <iostream>
#include <string>

using namespace std;
void input_interger(string label, int &n);
void input_array(int *arr, int size);
void output_array(int *arr, int size);
void push(int* &arr, int &size, int new_element, int index);

int main ()
{
	int n, x, y;
	input_interger("n = ", n);
	 
	int *numbers = new int[n];
	cout << "Nhap mang: ";
	input_array(numbers, n);
	
	input_interger("y = ", y);
	input_interger("x = ", x); 
	push(numbers, n, y, x); 
	
	cout << "Mang sau khi them: ";
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

void push(int* &arr, int &size, int new_element, int index)
{
	// tao mang moi
	int new_size = size + 1;
	int *new_arr = new int[new_size];
	
	
	//copy gia tri tu mang cu sang mang moi
	for(int i = 0; i < size; i++)
	{
		new_arr[i] = arr[i];
	}
	
	//them phan tu can them
	for(int i = new_size; i > index; i--)
	{
		new_arr[i] = new_arr[i - 1];
	}
	new_arr[index] = new_element;
	
	//gan mang moi cho con tro cu va tang size len 1 don vi
	delete[] arr;
	arr = new_arr;
	size = new_size;
	
}
