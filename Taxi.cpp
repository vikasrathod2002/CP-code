#include <bits/stdc++.h>
using namespace std;

#define ff            first
#define ss            second
#define pb            push_back
#define mp            make_pair
#define pii           pair<int,int>
#define vi            vector<int>
#define mii           map<int,int>
#define pqb           priority_queue<int>
#define pqs           priority_queue<int,vi,greater<int>>
#define setbit(x)     __builtin_popcountll(x)
#define zerobit(x)    __builtin_ctzll(x)   
#define mod           1000000007
#define en            "\n"
#define ll            long long


int main(){
     int n;
     cin>>n;
     int a=0,b=0,c=0,d=0,count=0;
      for(int i=0;i<n;i++){
      	  int t;
      	  cin>>t;
      	  if(t==1){
      	  	 a++;
      	  }else if(t==2){
      	  	b++;
      	  }else if(t == 3){
      	  	c++;
      	  }else{
      	  	d++;
      	  }
      }
      count+=d;
      if(c<a){
      	count+=c;
      	a=a-c;
      	c=0;
      }else if(a<=c){
      	 count+=a;
      	 c=c-a;
      	 a=0;
      }
      if(c>0){
      	count+=c;
      	c=0;
      }
      if(b>0){
      	count+=b/2;
      	b = b%2;
      }
      int left = a+(b*2);
      if(left<=4 && left>0){
      	 count+=1;
      }else if(left%4 != 0){
      	 count+=(left/4)+1;
      }else{
      	count += left/4;
      }
      cout<<count<<en;
      
      return 0;
  }
    
