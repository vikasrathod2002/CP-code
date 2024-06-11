#include"bits/stdc++.h"
using namespace std;
#define int long long 
int T,n;
signed main(){
	cin>>T;
	while(T--){
		cin>>n;
		int F=0;
		while(n){
			if(n<10){F=1;break;}
			if(n%10==9){F=1;break;}
			n/=10,n--;
		}
		if(!F)puts("YES");
		else puts("NO");
	}
}
