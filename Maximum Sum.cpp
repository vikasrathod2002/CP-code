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
const int P = 1e9 + 7;
#define int long long

void solve(){
 	int n,k;
 	cin>>n>>k;
 	vi a(n);
 	for(int i=0;i<n;i++)
 	     cin>>a[i];
 	     int S=0, sum=0;
 	     int cur = 0;
 	     for(int i=0;i<n;i++){
 	     	sum+=a[i];
 	     	cur+=a[i];
 	     	cur = max(cur,0LL);
 	     	 S = max(S,cur);
 	     }
 	    sum = (sum%P+P)%P;
 	    S = S % P;
 	    int t=1;
 	    for(int i=0;i<k;i++){
 	    	t = t * 2%P;
 	    }
 	    int ans = (sum + S * t - S + P)%P;
 	    cout<<ans<<en;
 	}
 signed main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    	 solve();
    }
   
    return 0;
    
   
}
