#include<iostream>
#define ll long long
using namespace std;
ll n,k;
int main(){
	ll t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<(n-1+k-2)/(k-1)<<endl;
	}
}
