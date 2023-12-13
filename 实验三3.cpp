#include"mytemprature.h"
#include<iomanip>
int main()
{
	int a(0),b(0);
	cout << "请选择1摄氏温度转华氏温度 2华氏温度转摄氏温度" << endl;
	cin >> a;
	if(a==1)
	{
		cout << "Celsius" << "     " << "Fahrenheit" << endl;
		cin >> b;
		cout << b << "          " << celsius_to_fah(b);
		
	}
	if (a == 2)
	{
		cout << "Fahrenheit" << "     " << "Celsius" << endl;
		cin >> b;
		cout << b << "          " << fixed << setprecision(2) << fahrenheit_to_cels(b);

	}
}
