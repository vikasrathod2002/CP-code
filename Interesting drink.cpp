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
    int n;
    cin>>n;
    vector<int>shops(n);
    for(int i=0;i<n;i++){
    	 cin>>shops[i];
    }
    sort(shops.begin(), shops.end());
    
    int q,ans;
    cin>>q;
    
    for(int i=0;i<q;i++){
    	ll coin;
    	cin>>coin;
    	
    	int index = upper_bound(shops.begin(),shops.end(),coin)-shops.begin();
    	cout<<index<<en;
    }
    return 0;
}
    
