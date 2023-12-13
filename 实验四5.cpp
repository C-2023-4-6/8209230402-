#include<iostream>
using namespace std;
int indexof(const char s1[], const char s2[])
{
	int a(0), b(0);
	a = strlen(s1);
	b = strlen(s2);
	for (int i = 0; i < b; i++)
	{
		if (s1[0] == s2[i])
		{
			for (int j = 0; j < a; j++)
			{
				if (s1[j] == s2[i + j])
				{
					if (j == a - 1)
					{
						return i;
					}
				}
				else { break; }

			}
		}
	}
	return -1;
}
int main()
{
	char s1[100], s2[100];
	cout << "Enter the first string : ";
	cin.getline(s1, 100);
	cout << "Enter the second string: ";
	cin.getline(s2, 100);
	cout << indexof(s1, s2);
}