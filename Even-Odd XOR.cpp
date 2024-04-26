
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, i, j, m;
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        
        if((n%4)==0){
            for(i=0; i<n; i++)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
        }else if((n%4)==1){
            cout<<"0 ";
            for(i=0; i<n-1; i++)
            {
                cout<<i+2<<" ";
            }
            cout<<"\n";
        }else if((n%4)==2){
            cout<<"2 3 1 4 12 8 ";
            for(i=0; i<n-6; i++)
            {
                cout<<14+i<<" ";
            }
            cout<<"\n";
        }else{
            cout<<"2 1 3 ";
            for(i=0; i<n-3; i++)
            {
                cout<<4+i<<" ";
            }
            cout<<"\n";
        }
    }
}
