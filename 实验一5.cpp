#include<iostream>
using namespace std;
int main()
{
	cout << "�����뻪���¶�" << endl;
	double huashiwendu = 0;
	cin >> huashiwendu;
	cout << "�����¶�" << fixed << setprecision(2) << (huashiwendu - 32) / 1.8;

}