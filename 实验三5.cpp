#include<iostream>
using namespace std;
int f(int x)
{ 
	if (x == 10)
	{

		return 1;
	}
	else {
		return (f(x + 1) + 1) * 2;
	}
	

}
int main()
{
	cout << "��һ�������Ϊ" << f(1);
	
}