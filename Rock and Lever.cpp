#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
 
 
 
void solve() {
   ll n;
   cin>>n;
   vector<ll> arr(n);
   for(int i=0;i<n;i++) {
      cin>>arr[i];
   }
   unordered_map<ll,ll> mp;
   ll ans=0;
   for(auto x:arr) {
      if(mp.find(log2(x)) != mp.end()) {
         ans+=mp[log2(x)];
      } 
      mp[log2(x)]++;
   }
   cout<<ans<<endl;
}
 
signed main() {
   int t;
   cin>>t;
   while(t--) {
      solve();
   }
}
