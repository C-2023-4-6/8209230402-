#include<iostream>
using namespace std;
int main()
{
	cout << "ÇëÊäÈë»ªÊÏÎÂ¶È" << endl;
	double huashiwendu = 0;
	cin >> huashiwendu;
	cout << "ÉãÊÏÎÂ¶È" << fixed << setprecision(2) << (huashiwendu - 32) / 1.8;

}