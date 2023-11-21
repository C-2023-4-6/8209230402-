#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int b(0), c(0), d(0),e(0);
	getline(cin, a);
	for (int i = 0; i < a.size(); i++)
	{
		if (('a'<a[i] && a[i] <'z')||('A' < a[i] && a[i] < 'Z'))
		{
			b = b + 1;
		}
		else if ( a[i] ==' ')
		{
			c = c + 1;
		}
		else if (47 < a[i] && a[i] < 58)
		{
			d = d + 1;
		}
		else { e = e + 1; }
	}
	cout << "英文字母的个数"<<b<<endl;
	cout << "空格的个数"<<c<<endl;
	cout << "数字字符的个数"<<d<<endl;
	cout << "其它字符的个数"<<e<<endl;
}