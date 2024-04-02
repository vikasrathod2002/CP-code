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
#define m           1000000007
#define en            "\n"
#define ll            long long

void solve(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	int max1 = 1e10;
	for(int i=n-1;i>=0;i--){
		if(a[i]<= max1){
			max1=min(max1,a[i]);
		}
	   else{
		vector<int>v1;
		int z1 = a[i];
		while(z1 > 0){
			v1.pb((z1%10));
			z1 = z1 / 10;
		}
		for(int j=0;j<v1.size();j++){
			if(v1[j] > max1){
				cout<<"NO"<<en;
				return ;
			}
			else{
				max1=min(max1,v1[j]);
			}
		}
	}
  }
	cout<<"YES"<<en;
}
 
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
      int t;
      cin>>t;
      while(t--){
      	solve();
      }
      
      return 0;
}
