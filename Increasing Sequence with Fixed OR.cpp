#include<bits/stdc++.h>
using namespace std;
int T;
long long n;
long long ans[105];
int tot;
int main(){
	cin.tie(0);
	cin>>T;
	while(T--){
		cin>>n;
		tot=0;
		for(int i=63;i>=0;i--){
			if((1ll<<i)&n&&(1ll<<i)!=n)ans[++tot]=n-(1ll<<i);
		}
		ans[++tot]=n;
		cout<<tot<<"\n";
		for(int i=1;i<=tot;i++)printf("%lld ",ans[i]);
		puts("");
	} 
}
