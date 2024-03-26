#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a[110];
	cin>>t;
	while(t--)
	{
		int ans=0;
		cin>>n;
		for(int i=1;i<=n;i++)  cin>>a[i];
		int l=1,r=n;
		while(!a[l])  l++;
		while(!a[r])  r--;
		for(int i=l;i<=r;i++)
			if(!a[i])  ans++;
		cout<<ans<<endl;
	}
}
