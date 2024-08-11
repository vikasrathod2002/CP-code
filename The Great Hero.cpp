 #include<bits/stdc++.h>
using namespace std;
long long t, x, y, n, mx, b, a[100005];
int main(){
	cin>>t;
	while(t--){
		cin>>x>>y>>n;
		for(long long i=1; i<=n; i++)
		cin>>a[i];
		mx=0;
		for(long long i=1; i<=n; i++){
			cin>>b;
			mx=max(mx, a[i]);
			y-=a[i]*((b+x-1)/x);
		}
		if(y+mx>=1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
