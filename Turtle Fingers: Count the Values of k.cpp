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


void solve(int tc){
	  int a,b,l;
	  cin>>a>>b>>l;
	  set<int>ans;
	  for(int i=0;i<=34;i++){
	  	  int x = l;
	  	  bool fail = false;
	  	  for(int j=0;j<i;j++){
	  	  	 if(x % a){
	  	  	 	fail = true;
	  	  	 	 break;
	  	  	 }
	  	  	 x /= a;
	  	  }
	  	  if(fail) break;
	  	  while(true){
	  	  	 ans.insert(x);
	  	  	 if(x % b) break;
	  	  	  x/=b;
	  	  }
	  }
	  cout<<ans.size();
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
       int t=1;
       cin>>t;
      for(int i=1;i<=t;i++){
      	  solve(i);
      	  cout<<en;
      }
      return 0;
}
