#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,m;cin>>n>>m;
	vector<int>r(n),c(m);
	for(int i=0;i<n;i++){
		string s;cin>>s;
		for(int j=0;j<m;j++){
			r[i]+=s[j]-'0';
			c[j]+=s[j]-'0';
		}
	}
	for(int i=0;i<n;i++){
		string s;cin>>s;
		for(int j=0;j<m;j++){
			r[i]-=s[j]-'0';
			c[j]-=s[j]-'0';
		}
	}
	int k=0;
	for(int i=0;i<n;i++){
		if(r[i]%3!=0) k=1;
	}
	for(int i=0;i<m;i++){
		if(c[i]%3!=0) k=1;
	}
	if(k==1) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}
 
int main(){
	int t;cin>>t;
	while(t--) solve();
	return 0;
}
