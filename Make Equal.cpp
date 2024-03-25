
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,p=0,q=0;
		cin>>n;
		vector<int >a(n);
		for(auto &v:a)
		{
			cin>>v;
			p+=v;
 
		}
		for(auto v:a)
		{
			if((q+=v-p/n)<0)
				break;
		}
		cout<<(q<0 ?"NO":"YES")<<endl;
	}
}
