#include<iostream>
using namespace std;
int main()
{
	double a = 0;
	cin >> a;
	if (a < 0)
	{
		cout << "a������ƽ����" << endl;
	}
	else if (a == 0)
	{
		cout << "aƽ����Ϊ0" << endl;
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
