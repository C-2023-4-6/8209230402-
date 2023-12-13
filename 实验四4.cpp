#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int temp = 0;
	int size3 = size1 + size2;
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}
	for (int i = 0; i < size2; i++)
	{
		list3[size1 + i] = list2[i];
	}
	for (int m = 0; m <size3-1 ; m++)
	{
		for(int n=0;n<size3-1;n++)
		{
			if(list3[n]>list3[n+1])
			{
				
				 temp=list3[n];
				list3[n] = list3[n+1];
				list3[n+1] = temp;
			}
		}
	}
	cout << "The merged list is";
	for (int i = 0; i < size3; i++)
	{
		cout << list3[i] << " ";
	}
}
int main()
{
	int size1(0), size2(0);
	 int list1[80] = { 0 };
	 int list2[80] = { 0 };
	 int list3[80] = { 0 };
	cout << "Enter list1:" << endl;
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list2:" << endl;
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}

	merge(list1, size1, list2, size2, list3);
}