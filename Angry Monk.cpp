#include <iostream>
signed main(){
  int t;
  std::cin >> t;
  while(t--){
    int n,k,mx=0,a;
    std::cin >> n >> k;
    for(int i=0;i<k;++i)
      std::cin >> a, mx = std::max(mx,a);
    std::cout << 2*n-2*mx-k+1 << '\n';
  }
}
