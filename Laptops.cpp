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


int n,x,y,a;bool z=0;
main(){
cin>>n;
for(a=0;a<n;a++)
{
cin>>x>>y;
if(x!=y)
z=1;
}
cout<<(z?"Happy Alex":"Poor Alex");
}
