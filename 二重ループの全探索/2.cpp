#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) std::begin(x), std::end(x)

int N, K;
bool hasKNums(int num) {
  int count = 0;
  for(int i = 1; i * i <= num; i++) {
    if(num % i != 0)
      continue;
    count++;
    if(num / i != i)
      count++;
  }
  return (count == K) ? true : false;
}

int main() {
  cin >> N >> K;

  int count = 0;
  rep3(i, 1, N + 1) {
    if(hasKNums(i))
      count++;
  }
  cout << count << endl;
  return 0;
}
