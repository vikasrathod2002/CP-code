#include<bits/stdc++.h>
using namespace std;
int main() {
int t; cin>>t;
while(t--)
{      
int n , m; 
cin>>n>>m;
int cnt=0;
int tx=0, ty=0;
 for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
char a; 
cin>>a;
if(a=='#')
{
cnt++;
tx+=(i+1);
ty+=(j+1);
}
}
}
cout<<tx/cnt<<" "<< ty/cnt<<endl;
}
}
