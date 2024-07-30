#include<bits/stdc++.h>
using namespace std;
int T_T,n,s;string a;
int main(){
	cin>>T_T;while(T_T--){
		cin>>n>>a;s=0;while(n&&a[n-1]=='A')n--;
		while(s<=a.size()-1&&a[s]=='B')s++;
		cout<<max(n-s-1,0)<<endl;
	}
}
