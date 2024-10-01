#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t,n;
	string ans="aiueo";
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<5;++i){
			cout<<string(n/5+(n%5>i),ans[i]);
		}
		cout<<"\n";
	}
}
