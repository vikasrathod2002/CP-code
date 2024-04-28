#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		set<int> st; for (int i = 0, x; i < n; ++i) cin >> x, st.insert(x);
		cout << n - st.size() << endl;
	}
}
