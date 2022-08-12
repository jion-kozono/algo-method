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
  for(int i = 1; i * i <= N; i++) {
    if(N % i != 0)
      continue;

    count++;
    if(i != N / i)
      count++;
  }

  cout << count << endl;
  return 0;
}
