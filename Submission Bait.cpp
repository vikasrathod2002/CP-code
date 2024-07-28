#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,n,a[55],cnt[55];
signed main(){
	cin>>t;
	while(t--){
		cin>>n,memset(cnt,0,sizeof cnt);int flag=0;
		for(int i=1;i<=n;i++)cin>>a[i],cnt[a[i]]++;
		for(int i=1;i<=n;i++)if(cnt[i]&1)flag=1;
		cout<<((flag)?"YES\n":"NO\n");
	}
}
