#include<iostream>
using namespace std;
int zuida(int a, int b)
{
	int da = a > b ? a : b;
	int xiao = a < b ? a : b;
	int c=1;
	while (c != 0) {
		c = da % xiao;
		da = xiao;
		xiao = c;

	}
	return da;


}
int main()
{
	int a = 0, b = 0;
	cin >> a;
	cin >> b;
	cout << "最大公约数为" << zuida(a, b) << endl;
	cout << "最小公倍数为" << a * b / zuida(a, b) << endl;

}