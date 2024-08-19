#include<bits/stdc++.h>
 
using namespace std;
 
const int MAX = 2e5+5;
 
int tc,n,x,z;
bool st;
 
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin>>tc;
	while(tc--){
		cin>>n;
		z = st = 0;
		for(int i = 1; i<=n; ++i){
			cin>>x;
			if(!x)++z;
			else if(x!=1)st = 1;
		}
		if(n-z+1>=z)cout<<"0\n";
		else if(st || z==n)cout<<"1\n";
		else cout<<"2\n";
	}
	return 0;
}
