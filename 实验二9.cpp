#include<iostream>
using namespace std;
int main()
{
	int amount=2;
	int i;
	int sum=0;
	for( i=1;amount<=100;i++)
	{
		sum += amount;
		amount = amount * 2;
	}
	cout << "ƽ��ÿ�컨" << sum * 0.8 / i;
}