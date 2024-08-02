#include<iostream>
#include<map>
using namespace std;
int main(){
    int T_T,n,i,k,cnt;
    string s;
    map<char,int>mp;
	for(cin>>T_T;T_T--;){
		for(cin>>n>>k>>s,mp.clear(),cnt=i=0;i<s.size();++i)mp[s[i]]++;
		for(auto&i:mp)if(i.second&1)cnt+=1;
		cout<<(cnt>k+1?"NO":"YES")<<endl;
	}
