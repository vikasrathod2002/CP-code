#include <iostream>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       long long int sum=0;
       int a;
       int b;
       int ans=0;
       for(int i=0;i<n;i++)cin>>a,sum+=1ll*a;
       for(int i=0;i<n;i++)cin>>b,ans=max(ans,b),sum+=1ll*b;
       cout<<sum-ans<<endl;
   }
}
