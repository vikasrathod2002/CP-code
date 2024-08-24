#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    cin.tie(0)->sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    int cur = 0;
    for(int i = 0;i<n;++i){
        int x;
        cin >> x;cur += x;
        int o =min(8,cur);
        cur -=o;
        k-=o;
        if(k <= 0){
            cout << i + 1;return 0;
        }
    }
    cout << -1;
}
