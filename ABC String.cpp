#include<bits/stdc++.h> 
using namespace std;
 
int main()
{
int t,i,sum,j;
string s;
cin>>t;
while(t--){
cin>>s;
int f=0;
for(i=0;i<8;i++){
sum=0;
for(j=0;s[j];++j){
sum+=(i>>s[j]-'A')&1?1:-1;
if(sum<0)break;
}
if(sum==0){
puts("YES");
f=1;
break;
}
}
if(!f)puts("NO");
}
}
