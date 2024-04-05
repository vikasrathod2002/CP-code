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
//#define mod           1000000007
#define en            "\n"
//#define ll            long long
#define int           long long
const   int mod=1e9+7;

void solve(){
	int n;
	cin>>n;
	vi v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	 
	  int year = v[0];
	for(int i=1;i<n;i++){
		int cnt = 1;
		while(year >= v[i]*cnt){
			 cnt++;
		}
		 year=v[i]*cnt;
	}
	 cout<<year<<en;
	 return;
}

 int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        
       int t=1;
       cin>>t;
       while(t--){
       	 solve();
       }
       return 0 ;
}
