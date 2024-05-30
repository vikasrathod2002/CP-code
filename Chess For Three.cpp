#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;while(t--){
        cin>>a>>b>>c;
        cout<<((a+b+c)%2?-1:min((a+b+c)/2,a+b))<<endl;
    }
}
