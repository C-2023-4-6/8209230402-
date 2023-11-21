#include<iostream>
using namespace std;
int main()
{
	double x,y;
	x = 0, y = 0;
	cin >> x;
	if(0<x<1)
	{
		y = 3 - 2 * x;
	}
	if (1 <= x < 5)
	{
		y = 2 / (4 * x) + 1;
	}
	if(5<=x<10)
	{
		y = x * x;
	}
	cout << "y=" << y;

}
