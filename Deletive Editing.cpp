#include<bits/stdc++.h>
using namespace std;
 
void solve(){
	string s,t;
	cin>>s>>t;
	int i=s.size()-1,j=t.size()-1;
	set<char> vis;
	while(i>=0&&j>=0){
		if(s[i]==t[j]){
			if(vis.count(t[j])){
				cout<<"No"<<endl;
				return;
			}
			j--;
		}
		else vis.insert(s[i]);
		i--;
	}
	if(j<0) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
