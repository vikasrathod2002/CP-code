#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int l,r,L,R;
		cin>>l>>r>>L>>R;
		cout<<max(min(r,R)-max(l,L)+(R!=r)+(l!=L),1)<<endl;
	}
}
