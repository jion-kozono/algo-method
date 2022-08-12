#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) std::begin(x), std::end(x)

string s;
char c;
int main() {
  cin >> s >> c;

  bool isContained = false;
  rep(i, s.size()) {
    if(c == s[i]) {
      isContained = true;
      break;
    }
  }

  cout << (isContained ? "Yes" : "No") << endl;
  return 0;
}
