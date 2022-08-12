#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N, a[109];
  cin >> N;

  int max_n = 0;
  rep(i, N) {
    int v;
    cin >> v;
    a[i] = v;
    max_n = max(max_n, v);
  }

  int index = 0;
  rep(i, N) {
    if(a[i] == max_n)
      index = i;
  }

  cout << index << endl;
  return 0;
}
