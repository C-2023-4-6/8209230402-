#include<iostream>
using namespace std;
int main()
{
	cout << "������һ���ַ�" << endl;
	char a = 'c';
	cin >> a;
	char b = a - 32;
	if(a > 'a' && a < 'z')
	{
		cout << "��д��ĸΪ" << b << endl;
	}
	else { cout << a + 1; }
}