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

int decimalToBinary(int n){
	 int ans = 0;
	 int p = 1;
	 
	 while(n > 0){
	 	int last_bit = (n&1);
	 	ans += p*last_bit;
	 	
	 	p = p*10;
	 	n = n >> 1;
	 }
	 
	 return ans;
}

int main(){
 
  int n;
  cin>>n;
  cout<<decimalToBinary(n);
  cout<<en;
  
  return 0;
  
}
