#include<iostream>
using namespace std;
int main()
{
	double x(0), y(0);
	int a(0),b(0);
	int i = 0;
	cout << "输入你要做的运算如1.+,2.-,3.*,4./,5.%"<<endl;
	cin >> i;
	cout << "输入两个数" << endl;
	if (i != 5) {
		
		cin >> x;
		cin >> y;

		switch (i) {
		case 1:cout << x +y; break;
		case 4:
			if (y == 0) {
				cout << "分母不能为零";
			}
			else { cout << x / y; }
			break;
		case 2:cout << x - y; break;
		case 3:cout << x * y; break;


		}
	}
	else {
		cin >> a;
		cin >> b;
		cout << a%b;
	}

}