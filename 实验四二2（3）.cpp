#include<iostream>
using namespace std;
void paixu(int p[], int a)
{
	int temp;
	for (int n = 0; n < a; n++)
	{
		for (int m = 0; m < a - 1; m++)
		{
			if (*(p + m) > *(p + m + 1))
			{
				temp = *(p + m);
				*(p + m) = *(p + m + 1);
				*(p + m + 1) = temp;
			}
		}
	}

}
int main()
{
	int  a(0), b(0);
	int* p = new int[a];
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> *(p + i);
	}
	cin >> b;
	cout << "p[" << b << "] = " << *(p + b) << endl;
	paixu(p, a);
	for (int i = 0; i < a; i++)
	{
		cout << *(p + i) << "  ";
	}
	delete p;
}