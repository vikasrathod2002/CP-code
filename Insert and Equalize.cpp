#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      cin>>a[i];
      sort(a,a+n);
      int g=0;
      for(int i=0;i<n-1;i++)
      {
        g=__gcd(g,(a[n-1]-a[i]));
      }
      int ans=0,cnt=1;
      for(int i=n-2;i>=0;i--)
      {
        if(a[i]==(a[n-1]-g*cnt))
        cnt++;
        ans+=(a[n-1]-a[i])/g;
      }
      cout<<ans+cnt<<endl;
   }
   return 0;
}
