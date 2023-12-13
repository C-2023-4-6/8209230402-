#include<iostream>
using namespace std;
void paixu(double list[10]) 
{
	double temp;
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++) 
		{
			if (list[j] > list[j + 1]) 
			{
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed == true);
}
int main()
{
	double list[10];
	cout << "请输入十个数" << endl;
	for (int i = 0; i < 10; i++)
	{cin >> list[i];}
	paixu(list);
	for (int i = 0; i < 10; i++)
	{
		cout << list[i]<<"  ";
	}
	
	


}