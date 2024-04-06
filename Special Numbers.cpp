#include <bits/stdc++.h>
using namespace std;

#define ff            first
#define ss            second
#define pb            push_back
#define mp            make_pair
#define pii           pair<int,int>
#define vi            vector<int>
#define mii           map<int,int>
#define pqb           priority_queue<int>
#define pqs           priority_queue<int,vi,greater<int>>
#define setbit(x)     __builtin_popcountll(x)
#define zerobit(x)    __builtin_ctzll(x)   
#define mod           1000000007
#define en            "\n"
#define ll            long long


int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
      int t;
      cin>>t;
      while(t--){
      	 ll n,k;
      	 cin>>n>>k;
      	  ll p = 1;
      	  ll ans = 0;
      	  for(int i=0;i<31;i++){
      	  	if(k &(1<<i)){
      	  		ans = (ans + p)%mod;
      	  	}
      	  	p*=n;
      	  	p%=mod;
      	  }
      	  cout<<ans<<en;
      }
}
