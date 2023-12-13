#include<iostream>
using namespace std;
bool is_prime(int num)
{
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return true;
		}
		
	}
	return false;
}
int main()
{
	int a(0), b(0);
	for (int i = 2; a <= 200; i++)
	{
		if (is_prime(i) == true)
		{
			a = a + 1;
			cout << i << "  ";
			b = b + 1;
			if (b == 10)
			{
				cout << endl;
				b = 0;
			}
		}
	}
}