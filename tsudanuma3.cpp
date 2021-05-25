#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str1,str2;
	cin >> str1 >> str2;

	int n1,n2,n;
	n1 = str1.size(); 
	n2 = str2.size();

	printf("\n");

	if(n1 > n2)
		n = n1;
	else if(n1 < n2)
		n = n2;
	else if(n1 == n2)
		n = n1;

	if(n1 > n2)
	{
		for(int i = 0; i < n;i++)
		{
			if(str1[i] != str2[i])
			{
				str2.insert(i," ");
			}
		}
		cout << str1 << endl;
		cout << str2 << endl;
	}	
	
	else if(n1 < n2)
	{
		for(int i = 0; i < n;i++)
		{
			if(str2[i] != str1[i])
			{
				str1.insert(i," ");
			}
		}

		cout << str1 << endl;
		cout << str2 << endl;
	}

	else if(n1 == n2)
	{
		cout << str1 << endl;
		cout << str2 << endl;
	}
	
	for(int i = 0; i < n; i++)
	{
		if(str1[i] == str2[i])
		{
			cout << "o";
		}
		else
		{
			cout << "x";
		}
	}
	cout << endl;
} 
