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

  for(int i = 1; i <= 9; i++) {
    cout << a[i] << endl;
  }

  return 0;
}
