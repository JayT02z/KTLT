#include <iostream>

using namespace std;

int main() 
{
    int num[4][4];
    int arr[20];

    cout << "Nhap mang: " << endl;
	for (int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cin >> num[i][j];
		}
	}

    int x = 0;
    for (int i = 0; i < 4; i++) 
	{
        for (int j = 0; j < 4; j++) 
		{
            arr[x] = num[i][j];
            x++;
        }
    }

    for (int i = 15; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp  = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	
	x = 0;
    for (int i = 0; i < 4; i++) 
	{
        for (int j = 0; j < 4; j++) 
		{
            num[i][j] = arr[x];
            x++;
        }
    }

    cout << "Mang sau khi sap xep: " << endl;
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cout << num[i][j] << " ";
		}
		cout << endl;
	}

    return 0;
}
