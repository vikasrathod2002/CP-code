#include<bits/stdc++.h>
using namespace std;
int t,n;
string s1,s2;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>s1>>s2;
		cout<<(s1.find('1')>s2.find('1')?"NO":"YES")<<endl;
	}
	return 0;
}
