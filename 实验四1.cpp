#include<iostream>
using namespace std;
int main()
{
	int arr[10],a(0),b(0);

	cout << "Enter ten numbers:" << endl; 
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	cout << "The distinct numbers are:";
	cout << arr[0] << "  ";
	for (int i = 1; i <10 ; i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j]!=arr[i])
			{
				if (j == i - 1)
				{
					cout << arr[i]<<"  ";
				}
			}
			else { break; }
			
		}
	}
	
	
}	 