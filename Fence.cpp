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
   int n,k;
   cin>>n>>k;
    vi a(n);
   for(int i=0;i<n;i++)
   	    cin>>a[i];
    vi pref(200005);
   for(int i=0;i<n;i++)
   	    pref[i+1]=pref[i]+a[i];
   	    int mini_total=1e9;
   	    int index;
   	    
   	    for(int i=0;i<=n-k;i++){
   	    	int total=pref[i+k]-pref[i];
   	    	  if(total < mini_total){
   	    	  	mini_total=total;
   	    	  	index = i+1;
   	    }
   }
   cout<<index<<en;
   
   return 0;
}
    
