#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while (t--){
	int n;
	cin>>n;
	 double a[n+5],sum=0;
	for (int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
 
	long long ans=0;
	map <double, int> st;
	for (int i=0;i<n;i++){
		ans+=st[2*(double)sum/n-a[i]];
		st[a[i]]++;
	}
	cout<<ans<<endl;
	}
}
