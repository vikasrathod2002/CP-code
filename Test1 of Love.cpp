#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+4;
signed main()
{
	string s;
	int m,t,n,k,c=0,p=1;
	cin>>t;
	while(t--){
		cin>>n>>m>>k;
		cin>>s;
		p=1;
		c=0;
		for(int i=0;i<n;i++){
			c++;
			if(s[i]=='L') {
			c=0;	
			}
			if(c>=m){
				k--;
				if(s[i]=='C') p=0;
			}
		}
		if(k>=0&&p) cout<<"YES\n";
		else cout<<"NO\n";
	}

}
