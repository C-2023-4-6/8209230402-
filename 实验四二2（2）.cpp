#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString)
{
	int a, sum(0);
	a = strlen(hexString);
	int* p=new int[a];
	for (int i = 0; i < a; i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <= 'F')
		{
			*(p + i) = (static_cast<int>(hexString[i]) - 55) * (pow(16, a - 1 - i));
		}
		else
		{
			*(p + i) = (hexString[i] - 48) * pow(16, a - i - 1);
		}
		sum = sum + *(p + i);
	}
	delete p;
	return sum;

	
}
int main()
{
	char a[100];
	cin.getline(a, 100);
	cout << "十进制为" << parseHex(a);
	
}