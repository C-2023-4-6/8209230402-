#include<iostream>
using namespace std;
int main()
{
	double x, y, z, zhouchang;
	x = 0, y = 0, z = 0, zhouchang = 0;
	cout << "�����������߳�" << endl;
	cin >> x;
	cin >> y;
	cin >> z;
	if ((x + y > z) && (x + z > y) && (y + z > x))
	{
		zhouchang = x + y + z;
		cout << "�ܳ�=" << zhouchang;
		if(x!=y&&y!=z&&z!=x)
		{
			cout << "���ǵ���������";
		}
		else{ cout << "�ǵ���������"; }

	}
	else { cout << "�޷�����������"; }
	

}