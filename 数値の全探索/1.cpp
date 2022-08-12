#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) std::begin(x), std::end(x)

int main() {
  int N;
  cin >> N;

  int count = 0;
  rep3(i, 1, N + 1) {
    if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
      count++;
  }

  cout << count << endl;
  return 0;
}
