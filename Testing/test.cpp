#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	getline(cin,str);
	cout<<str;
	int n = str.length();
	int as[n];
	for (int i=0;i<n;i++)
	{
		as[i] = str[i];
	}
	cout<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<as[i]<<" ";
	}
	return 0;
}