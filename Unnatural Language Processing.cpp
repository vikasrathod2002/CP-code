#include<bits/stdc++.h>
using namespace std;
int main(){
int t; 
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
for(int i=0; i<n; i++){
if(i>1){
if(s[i+1]=='a'||s[i+1]=='e')cout<<".";
}
cout<<s[i];
}
cout<<endl;
}
}
