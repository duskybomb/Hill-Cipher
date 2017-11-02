#include <bits/stdc++.h>
#include "hillcipher.h"

using namespace std;
void takeinput(int key[2][2])
{
	int n;
	string plaint;
	cout<<"Enter the text ";
	//plaint = "aahaah";
	cin.ignore(256,'\n');
	getline(cin,plaint);
	n = plaint.length();
	if (n%2 == 0)
	{
		int plaineven[2][n/2];
		int k=0;
		for (int i=0;i< n/2;i++)
		{
			for(int j=0;j<2;j++)
			{
				plaineven[j][i] = plaint[k];
				//cout<<"xxx"<<plaineven[j][i]<<"xxx  ";
				k++;
			}
		}

		for(int m=0;m<n/2;m++)
		{
			for(int f=0;f<2;f++)
			{
				int mulmat = 0,temp = 0;
				for(int g=0;g<2;g++)
				{
					//temp = 0;
					temp = key[f][g] * plaineven[g][m]; 
					mulmat += temp;
					//cout<<temp<<"  "<<mulmat<<" ";
				}
				mulmat = (mulmat % 95) + 32;
				//cout<<".."<<mulmat<<" ..  ";
				char s = mulmat;
				cout<<s<<"  ";
			}

		}

	}
	else
	{
		for (int i=0;i< n/2 + 1;i++)
		{
			int plaineven[2][n/2 + 1];
			int k=0;
			for (int i=0;i< n/2 + 1;i++)
			{
				for(int j=0;j<2;j++)
				{
					plaineven[j][i] = plaint[k];
					//cout<<"xxx"<<plaineven[j][i]<<"xxx  ";
					k++;
				}
			}

		for(int m=0;m<n/2 + 1;m++)
		{
			for(int f=0;f<2;f++)
			{
				int mulmat = 0,temp = 0;
				for(int g=0;g<2;g++)
				{
					//temp = 0;
					temp = key[f][g] * plaineven[g][m]; 
					mulmat += temp; 
					//cout<<temp<<"  "<<mulmat<<" ";
				}
				mulmat = (mulmat % 95) + 32;
				//cout<<".."<<mulmat<<" ..  ";
				char s = mulmat;
				cout<<s<<"  ";
			}

		}
		}
	}
	
}

void readtxt(int key[2][2])
{

}

void encrypt(int key[2][2])
{
	//system("cls");
	int option;
	cout<<"Har Hill Cipher\n";
	cout<<"\n1.Type input\n2.Read input from a file";
	ret:
	cout<<"\nEnter your choice: ";
	cin>>option;
	switch (option)
	{
		case 1:
			takeinput(key);
			break;
		case 2:
			readtxt(key);
			break;
		default:
			cout<<"\nPlease enter a valid option.";
			goto ret;
	}
}