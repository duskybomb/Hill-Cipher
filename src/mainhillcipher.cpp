#include "hillcipher.h"
#include<bits/stdc++.h>

using namespace std;
int main()
{
	int option;
	int key[2][2];
	cout<<"Har Hill Cipher\n";
	dtz:
	cout<<"Enter Your Key: ";
	for(int i =0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>key[i][j];
		}
	}
	cout<<determinantOfMatrix(key,2);
	if (determinantOfMatrix(key,2) == 0)
	{
		cout<<"Enter an invertible matrix!";
		goto dtz;
	}
	cout<<"\n1. Encrypt your data\n2.Decrypt your data\n";
	ret:
	cout<<"\nEnter your choice: ";
	cin>>option;
	switch (option)
	{
		case 1: 
			encrypt(key);
			break;
		case 2:
			decrypt(key);
			break;
		default:
			cout<<"Enter a valid option.";
			goto ret;
	}
	system("pause");
	return 0;
}