#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;


int main() {
    int t;
    scanf("%d", &t);
    forn(_, t){
        int n, x;
        scanf("%d%d", &n, &x);
        vector<int> a(n);
        forn(i, n) scanf("%d", &a[i]);
        long long ans = 1e18;
        long long cur = 0;
        forn(i, n - 1){
            cur += abs(a[i] - a[i + 1]);
        }
        forn(_, 2){
            long long mn = abs(a[0] - 1);
            ans = min(ans, cur + abs(a[0] - x) + (x - 1));
            forn(i, n - 1){
                ans = min(ans, cur + mn - abs(a[i] - a[i + 1]) + abs(a[i] - x) + abs(a[i + 1] - x));
                ans = min(ans, cur - abs(a[i] - a[i + 1]) + abs(a[i] - x) + abs(a[i + 1] - 1) + (x - 1));
                mn = min(mn, 0ll - abs(a[i] - a[i + 1]) + abs(a[i] - 1) + abs(a[i + 1] - 1));
            }
            ans = min(ans, cur + mn + abs(a.back() - x));
            reverse(a.begin(), a.end());
        }
        printf("%lld\n", ans);
    }
    return 0;
}
