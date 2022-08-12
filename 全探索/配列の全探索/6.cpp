#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;

  int max_n = 0;
  rep(i, N) {
    int a;
    cin >> a;
    max_n = max(max_n, a);
  }

  cout << max_n << endl;
  return 0;
}
