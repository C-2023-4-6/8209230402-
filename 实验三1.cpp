#include<iostream>
using namespace std;
int zuida(int& m, int& n)
{
	int da = m > n ? m : n;
	int xiao = m < n ? m : n;
	int c = 1;
	while (c != 0) {
		c = da % xiao;
		da = xiao;
		xiao = c;

	}
	return da;
}
int zuixiaogongbei(int& m, int& n)
{
	int zuixiao = m * n / zuida(m, n);
		return zuixiao;
}
int main()
{
	int m(0), n(0);
	cout << "������m��n" << endl;
	cin >> m;
	cin >> n;
	cout << "���Լ��Ϊ" << zuida(m, n) << endl;
	cout << "��С������Ϊ" << zuixiaogongbei(m,n)  << endl;
}