#include<bits/stdc++.h>
using namespace std;
int t,n,k,c,m;
int main(){
	cin>>t;
	while(t--){
		m=0;
		int a[102]={0};
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>c;
			a[c]++;
			if(a[c]>m)m=a[c];
		}if(m>=k)cout<<k-1<<'\n';
		else cout<<n<<'\n';
	}
}
