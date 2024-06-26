#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
    cin>>t;while(t--)
    {int c=0,n;
        string str;cin>>n>>str;
        for(int i=0;i<n;i++){if(str.substr(i,3)=="map"||str.substr(i,3)=="pie"){c++;str[i+2]='a';}
    }cout <<c<<endl;
}
}
