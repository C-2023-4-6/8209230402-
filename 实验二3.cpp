#include<iostream>
using namespace std;
int main()
{
	double x, y, z, zhouchang;
	x = 0, y = 0, z = 0, zhouchang = 0;
	cout << "请输入三条边长" << endl;
	cin >> x;
	cin >> y;
	cin >> z;
	if ((x + y > z) && (x + z > y) && (y + z > x))
	{
		zhouchang = x + y + z;
		cout << "周长=" << zhouchang;
		if(x!=y&&y!=z&&z!=x)
		{
			cout << "不是等腰三角形";
		}
		else{ cout << "是等腰三角形"; }

	}
	else { cout << "无法构成三角形"; }
	

}