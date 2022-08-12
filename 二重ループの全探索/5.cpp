#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) std::begin(x), std::end(x)

bool isPalindrome(string s) {
  int length = s.size();
  rep(i, length / 2) {
    if(s[i] != s[length - 1 - i])
      return false;
  }
  return true;
}

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i, N) cin >> S[i];

  int count = 0;
  rep(i, N) {
    if(isPalindrome(S[i]))
      count++;
  }
  cout << count << endl;
  return 0;
}
