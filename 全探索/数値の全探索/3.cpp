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

  if(N == 1) {
    cout << "No" << endl;
    return 0;
  }

  bool isPrime = true;
  for(int i = 2; i * i <= N; i++) {
    if(N % i == 0) {
      isPrime = false;
      break;
    }
  }

  cout << (isPrime ? "Yes" : "No") << endl;
  return 0;
}
