#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
    long long a,b;
    cin>>a>>b;
    long long x = abs(a-b);
	if(x==0) 
	cout<<"0 0\n";
	else
	{
	    long long y = min(x-(b%x),b%x);
	    cout<<x<<" "<<y<<"\n";
	}
    }
    return 0;
} 
