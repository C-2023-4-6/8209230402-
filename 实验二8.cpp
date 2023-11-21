#include<iostream>
using namespace std;
int main()
{
	double a = 0;
	cin >> a;
	if (a < 0)
	{
		cout << "a不存在平方根" << endl;
	}
	else if (a == 0)
	{
		cout << "a平方根为0" << endl;
	}
	else {
		double x1 = a;
		double x2 = (x1 + a / x1) / 2;
		while (abs(x2 - x1) >= 0.00001)
		{
			x1 = x2;
			x2 = (x1 + a / x1) / 2;
		}
		cout << x2;
	}
}
