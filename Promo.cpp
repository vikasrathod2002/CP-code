#include<bits/stdc++.h>
using namespace std;
int main(){
int n,q,x,y;
cin>>n>>q;
long long a[n+1];
a[0]=0;
for(int i=0;i<n;i++){
    cin>>a[i+1];
}
sort(a,a+n+1);
for(int i=1;i<=n;i++){
    a[i]+=a[i-1];
}
  while(q--){
   cin>>x>>y;
 cout<<a[n+y-x]-a[n-x]<<endl;
 
 
}
}
