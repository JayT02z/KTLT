#include <iostream> 
#include <string>

using namespace std;

int N, X[100], Cot[100], Duong_Cheo_Chinh[100], Duong_Cheo_Phu[100];

void output_result();
void test(int i);

int main()
{
	cout << "N = ";
	cin >> N;
	for(int i = 1; i <= 99; i++)
	{
		Cot[i] = Duong_Cheo_Chinh[i] = Duong_Cheo_Phu[i] = 1; 
	} 
	test(1);
	
	return 0;
}

void output_result()
{
	for(int i = 1; i <= N; i++)
	{
		cout << "Con hau o hang thu: " << i << " va cot: " << X[i] << endl;
	}
}
void test(int i)
{
	//xet cac kha nang mang X[i] co the nhan
	for(int j = 1; j <= N; j++)
	{
		//gan X[i] = j
		if(Cot[j] == 1 && Duong_Cheo_Chinh[i - j + N] == 1 && Duong_Cheo_Phu[i + j - 1] == 1)
		{
			X[i] = j;
			Cot[j] = Duong_Cheo_Chinh[i - j + N] = Duong_Cheo_Phu[i + j - 1] = 0;
			if(i == N)
			{
				output_result(); 
			}
			else
			{
				test(i + 1); 
			}
			Cot[j] = Duong_Cheo_Chinh[i - j + N] = Duong_Cheo_Phu[i + j - 1] = 1;
		}
	}
}
