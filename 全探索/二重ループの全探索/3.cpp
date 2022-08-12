#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) std::begin(x), std::end(x)

int L, R;
bool isPalindrome(int num) {
  string s = to_string(num);
  int length = s.size();
  for(int i = 0; i < length / 2; i++) {
    if(s[i] != s[length - 1 - i]) {
      return false;
    }
  }
  return true;
}

int main() {
  cin >> L >> R;

  int count = 0;
  rep3(i, L, R + 1) {
    if(isPalindrome(i))
      count++;
  }
  cout << count << endl;
  return 0;
}
