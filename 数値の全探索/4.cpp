#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) std::begin(x), std::end(x)

int GCD(int x, int y) { return (x % y) ? GCD(y, x % y) : y; }

int main() {
  int A, B;
  cin >> A >> B;
  cout << GCD(A, B) << endl;

  return 0;
}
