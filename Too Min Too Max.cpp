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

 void solve()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a,a+n);
    int i=a[0],k=a[1],l=a[n-1],j=a[n-2];
    int ans=abs(i-j)+abs(j-k)+abs(k-l)+abs(l-i);
    cout<<ans<<endl;
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
 
    int t;
    t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
