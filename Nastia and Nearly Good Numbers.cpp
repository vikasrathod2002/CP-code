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

void solve(){
	ll a,b;
	cin>>a>>b;
	if(b!=1){
		cout<<"YES"<<en;
		cout<<(a*b)<<" "<<a<<" "<<(b+1ll)*a<<en;
		 return;
	}else{
		cout<<"NO"<<en;
		return;
	}
}

int main(){
   
     int t=1;
     cin>>t;
     for(int i=1;i<=t;i++){
     	solve();
     }
     return 0;
  }
    
 
