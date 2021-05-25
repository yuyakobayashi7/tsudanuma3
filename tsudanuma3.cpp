#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a,b,c;
	int maru[1000];
	int fg = 0;

	cin >> a >> b;

	int n1,n2,n,n3;
	n1 = a.size(); 	//n1 文字数
	n2 = b.size();

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
			if(a[i] == b[i])
			{
				maru[fg] = 1;
				fg++;
			}
		
			else if(a[i] != b[i])
			{
				maru[fg] = 0;
				fg++;
				b.insert(i," ");
			}
		}
		cout << a << endl;	//加工済み状態で出力
		cout << b << endl;
	}	
	
	else if(n1 < n2)
	{
		for(int i = 0; i < n;i++)
		{
			if(b[i] == a[i])
			{
				maru[fg] = 1;
				fg++;
			}
		
			else if(b[i] != a[i])
			{
				maru[fg] = 0;
				fg++;
				a.insert(i," ");
			}
		}

		cout << a << endl;
		cout << b << endl;
	}

	else if(n1 == n2)
	{
		for(int i = 0; i < n;i++)
		{
			if(a[i] == b[i])
			{
				maru[fg] = 1;
				fg++;
			}
		
			else if(a[i] != b[i])
			{
				maru[fg] = 0;
				fg++;
			}
		}
		cout << a << endl;
		cout << b << endl;
	}
	

	for(int i = 0; i < n; i++)
	{
		if(a[i] == b[i])
		{
			cout << "○";
		}
		else
		{
			cout << "✗;";
		}
	}

	cout << endl;
} 
