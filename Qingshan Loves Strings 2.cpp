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
#define en            "\n"
#define ll            long long
#define vr(v)         v.begin(),v.end()
#define rv(v)         v.begin(),v.end()



// Mathematical functions
ll gcd(ll a, ll b){
	if (b == 0) return a;
	return gcd(b, a % b);
}  



ll lcm(ll a, ll b){
	return (a/gcd(a,b)*b);
}



ll moduloMultiplication(ll a,ll b,ll mod){
	ll res = 0;
	a %= mod;
	while (b){
		if (b & 1)res = (res + a) % mod;
		b >>= 1;
	}
	return res;
}



ll powermod(ll x, ll y, ll p){
	ll res = 1;
	x = x % p;
	if (x == 0) return 0;
	while (y > 0){
		if (y & 1)res = (res*x) % p;
		y = y>>1;
		x = (x*x) % p;
	}
	return res;
}


//Bits
string decToBinary(int n){
	string s="";
	int i = 0;
	while (n > 0){
		s =to_string(n % 2)+s;
		n = n / 2;
		i++;
	}
	return s;
}



ll binaryToDecimal(string n){
	string num = n;
	ll dec_value = 0;
	int base = 1;
	int len = num.length();
	for(int i = len - 1; i >= 0; i--){
		if (num[i] == '1')dec_value += base;
		 base = base * 2;
	}
   return dec_value;
}



//Check
bool isPrime(ll n){
	if(n<=1)return false;
	if(n<=3)return true;
	if(n%2==0||n%3==0)return false;
	for(int i=5;i*i<=n;i=i+6)
	if(n%i==0||n%(i+2)==0)return false;
	return true;
}


bool isPowerOfTwo(int n){
	if(n==0)return false;
	return (ceil(log2(n)) == floor(log2(n)));
  }
  
  
  
bool isPerfectSquare(ll x){
	if (x >= 0) {
		ll sr = sqrt(x);
		return (sr * sr == x);
	}
	return false;
}
/******************************************************/




int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
     int t;
     cin>>t;
     while(t--){
     	int n;
	    cin>>n;
	    string s;
	    cin>>s;
	 
	int cnt0=0,cnt1=0;
	for(int i=0;i<s.size();i++){
		cnt0 +=s[i] == '0';
		cnt1 +=s[i] == '1';
		}
		if(cnt0 != cnt1){
			cout<<-1<<en;
			continue;
		}
		
		vector<int>v;
		deque<char>q;
		
		for(int i=0;i<s.size();i++)
			q.push_back(s[i]);
         
         int d=0;
         while(!q.empty()){
         	if(q.front() == q.back()){
         		if(q.front() == '0'){
         			q.push_back('0');
         			q.push_back('1');
         			v.push_back(n-d);
         		}else{
         			q.push_front('1');
         			q.push_front('0');
         			v.push_back(0+d);
         		}
         		n+=2;
         	}
         	while(!q.empty() && q.front() != q.back()){
         		q.pop_back();
         		q.pop_front();
         		++d;
         	}
         }
         cout<<v.size()<<en;
         if(v.size() == 0){
         	cout<<en;
         	continue;
         }
         for(auto it : v)
         cout<<it<<en;
        cout<<en; 
     } 
     
     return 0;
}
