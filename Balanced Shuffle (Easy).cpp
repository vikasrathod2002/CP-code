#include <bits/stdc++.h>
using namespace std;
 
int main() {
	vector<pair<int,int>>v;
	string s;cin >> s;
	int c = 0;
    int t = 0;
	for(int i=0;i<s.size();i++){
		v.push_back({c,-t});
        t++;
        if(s[i] == '(')c++;
        else c--;
	}
	sort(v.begin(),v.end());
	for(auto i : v){
		cout << s[-i.second];
	}
}
