#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) std::begin(x), std::end(x)

int X, Y, Z, A[109], B[109], C[109];
int main() {
  cin >> X >> Y >> Z;
  rep(i, X) cin >> A[i];
  rep(i, Y) cin >> B[i];
  rep(i, Z) cin >> C[i];

  int count = 0;
  rep(i, X) rep(j, Y) rep(k, Z) {
    if(A[i] + B[j] == C[k])
      count++;
  }

  cout << count << endl;
  return 0;
}
