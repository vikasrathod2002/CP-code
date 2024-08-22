#include<iostream>
using namespace std;
int main(){
	int q, n, k, min, max, cur;
	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> n;
		cin >> k;
		cin >> cur;
		max = cur;
		min = cur;
		for(int j = 1; j < n; j++){
			cin >> cur;
			if(cur > max){
				max = cur;
			}
			if(cur < min){
				min = cur;
			}
		}
		if(max - min > 2 * k){
			cout << -1 << '\n';
		}
		else{
			cout << min + k << '\n';
		}
	}
	return 0;
}
