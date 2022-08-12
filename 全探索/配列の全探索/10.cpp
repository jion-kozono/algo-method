#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N;
  vector<int> a(10);
  cin >> N;

  rep(i, N) {
    int v;
    cin >> v;
    a[v]++;
  }

  int ans = 0;
  int maxNum = 0;
  for(int i = 1; i <= 9; i++) {
    maxNum = max(maxNum, a[i]);
    if(a[i] == maxNum)
      ans = i;
  }

  cout << ans << endl;

  return 0;
}
