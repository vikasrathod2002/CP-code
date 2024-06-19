#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		string s;
		cin >> n >> s;
		int co=0, adj=0;
		for(int i=0;i<n;i++)
		{
			co+=s[i]=='1';
			if(i+1<n && s[i]==s[i+1] && s[i]=='1') adj=1;
		}
		if(co%2 || (co==2&&adj)) puts("NO");
		else puts("YES");
	}
}
