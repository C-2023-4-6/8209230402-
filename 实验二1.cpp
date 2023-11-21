#include<iostream>
using namespace std;
int main()
{
	cout << "请输入一个字符" << endl;
	char a = 'c';
	cin >> a;
	char b = a - 32;
	if(a > 'a' && a < 'z')
	{
		cout << "大写字母为" << b << endl;
	}
	else { cout << a + 1; }
}