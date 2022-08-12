#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) std::begin(x), std::end(x)

int N, M, K, A[109], B[109];
int main() {
  cin >> N >> M >> K;
  rep(i, N) cin >> A[i];
  rep(i, M) cin >> B[i];

  int count = 0;
  rep(i, N) rep(j, M) {
    if(A[i] + B[j] == K)
      count++;
  }

  cout << count << endl;
  return 0;
}
