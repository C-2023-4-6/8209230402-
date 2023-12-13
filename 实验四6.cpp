#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < strlen(s); i++)
	{
		counts[s[i] - 'a']++;
		counts[s[i] - 'A']++;
	}
}
int main()
{
	char s[100];
	int counts[26] = {0};
	cin.getline(s, 100);
	count(s, counts);
	
	for (int i = 0; i < 26; i++)
	{
		char zimu = 'a' + i;
		cout << zimu << ":" << counts[i] << "times" << endl;
	}
 }
