#include <iostream>
#include <string>
 
 using namespace std;
 
 void input_interger(string label, int &n);
 void input_array(int *arr, int size);
 void output_array(int *arr, int size);
 void push(int* &arr, int &size, int new_element);
 
 int main()
 {
	int n, x;
	
	input_interger("n = ", n); 
	
	int *numbers = new int[n];
	cout << "Nhap mang: ";
	input_array (numbers, n);

	input_interger("x = ", x); 
	
	push(numbers, n, x);
	
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
 	for (int i = 0; i < size; i++)
 	{
 		cout << arr[i] << " ";
	}
 }
 
 void push(int* &arr, int &size, int new_element) //truyen tham chieu cho con tro
 {
 	// tao mang moi gom n + 1 phan tu
 	int new_size = size + 1;
 	int *new_arr = new int[new_size];
 	
 	// sao chep phan tu mang cu sang mang moi
 	for(int i = 0; i < size; i++)
 	{
 		new_arr[i] = arr[i];
	}
	
	//them phan tu cu vao cuoi mang moi
	new_arr[new_size - 1] = new_element;
	
	//Xoa du lieu mang cu
	delete[] arr;
	
	//gan mang moi sang con cu va tang size len 1 don vi
	arr = new_arr;
	size = new_size;
	
 }
