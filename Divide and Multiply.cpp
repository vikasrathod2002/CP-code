#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  int a[n];
  long long ans=1;
  int sum=0;
  for(int i=0;i<n;i++){
      cin>>a[i];
      while(a[i]%2==0)a[i]/=2,ans*=2;
      sum+=a[i];
  }
  long long ans2=0;
  for(int i=0;i<n;i++){
      ans2=max(ans2,ans*a[i]+sum-a[i]);
  }
  cout<<ans2<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
