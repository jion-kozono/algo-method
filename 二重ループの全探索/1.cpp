#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) std::begin(x), std::end(x)

bool isPrime(int num) {
  if(num == 1)
    return false;
  for(int i = 2; i * i <= num; i++) {
    if(num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int N;
  cin >> N;

  int count = 0;
  rep(i, N) {
    int a;
    cin >> a;
    if(isPrime(a))
      count++;
  }
  cout << count << endl;
  return 0;
}
