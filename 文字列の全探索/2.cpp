#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) std::begin(x), std::end(x)

string s;
int main() {
  cin >> s;

  bool isPalindrome = true;
  int length = s.size();
  rep(i, length / 2) {
    if(s[length - 1 - i] != s[i]) {
      isPalindrome = false;
      break;
    }
  }

  cout << (isPalindrome ? "Yes" : "No") << endl;
  return 0;
}
