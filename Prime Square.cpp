#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int o=1;o<=n;o++)
            {
                if(i==o||o==i%n+1)
                {
                    cout<<1<<' ';
                }
                else
                {
                    cout<<0<<' ';
                }
            }
            cout<<'\n';
        }
    }
    return 0;
}
