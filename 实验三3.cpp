#include"mytemprature.h"
#include<iomanip>
int main()
{
	int a(0),b(0);
	cout << "��ѡ��1�����¶�ת�����¶� 2�����¶�ת�����¶�" << endl;
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
