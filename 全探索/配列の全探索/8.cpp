#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;

  int min_n = INT_MAX;
  rep(i, N) {
    int a;
    cin >> a;
    min_n = min(min_n, a);
  }

  cout << min_n << endl;
  return 0;
}
