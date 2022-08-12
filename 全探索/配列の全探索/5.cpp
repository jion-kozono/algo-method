#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N, a[109];
  cin >> N;

  int count = 0;
  rep(i, N) { cin >> a[i]; }
  for(int i = 1; i < N; i++) {
    if(a[i] > a[i - 1])
      count++;
  }

  cout << count << endl;
  return 0;
}
