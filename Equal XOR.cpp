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
    	 int n,k;
    	 cin>>n>>k;
    	 k = 2 * k;
    	 
    	 vector<int>a(2*n),occ(n+1,0);
    	 
    	 for(auto &x : a) cin>>x;
    	  for(int i=0;i<n;i++) occ[a[i]]++;
    	  
    	  vector<int> g0,g1,g2;
    	  for(int i=1;i<=n;i++){
    	  	 if(occ[i] == 0) g0.pb(i);
    	  	 else if(occ[i] == 1) g1.pb(i);
    	  	 else g2.pb(i);
    	  }
    	  
    	  int v = 0;
    	  for(auto x : g2){
    	  	if(v < k){
    	  		v+=2;
    	  		cout<<x<<" "<<x<<" ";
    	  	}
    	  }
    	  
    	  for(auto x : g1){
    	  	if(v < k){
    	  		v++;
    	  		cout<<x<<" ";
    	  	 }
    	  }
    	  cout<<"\n";
    	  
    	  v = 0;
    	  for(auto x : g0){
    	  	if(v < k){
    	  		v+=2;
    	  		cout<<x<<" "<<x<<" ";
    	  	}
    	  }
    	  for(auto x : g1){
    	  	if(v < k){
    	  		v++;
    	  		cout<<x<<" ";
    	  	}
    	  }
    	  cout<<en;
    }
   
    return 0;   
}
