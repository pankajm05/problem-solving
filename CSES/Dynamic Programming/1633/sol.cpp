/** 
 *    author:  pankaj_m05
 *    created: 30.07.2022 04:06:01
**/ 
#include<bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "DSA/debug"
#else
#define debug(...) 42
#endif

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  constexpr int md = (int) 1e9 + 7;
  int n;
  cin >> n;
  vector<long long> dp(n + 1);
  dp[0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j : {1, 2, 3, 4, 5, 6}) {
      if (i >= j) {
        (dp[i] += dp[i - j]) %= md;  
      }
    }    
  }
  cout << dp[n];
  return 0;
}