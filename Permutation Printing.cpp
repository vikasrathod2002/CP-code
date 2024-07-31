#include<bits/stdc++.h>
using namespace std;
int main(){
int t; 
cin>>t;
while(t--){
int n;
cin>>n;
for(int i=1;i<=n/2;i++){
    cout<<i<<" "<<n-i+1<<" ";
}
if(n%2==1){
cout<<(n/2)+1<<" ";
}
cout<<endl;
}
}
