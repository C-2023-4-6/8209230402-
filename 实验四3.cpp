#include<iostream>
using namespace std;
void change(bool& a)
{
	if (a == 0)
	{
		a = 1;
	}
	else if(a == 1)
	{
		a = 0;
	}
}
int main()
{
	bool L[101]{0};
	for (int i = 1; i <= 100; i++)
	{
		for (int j = i; j <= 100; j = j + i)
		{
			change(L[j]);
		}
	}
	cout << "开着的柜子为:";
	for (int i = 1; i <= 100; i++)
	{
		if (L[i] == 1)
		{
			cout << "L" << i << "  ";
		}
	}
	cout << "关着的柜子为:";
	for (int i = 1; i <= 100; i++)
	{
		if (L[i] == 0)
		{
			cout << "L" << i << "  ";
		}
	}
}