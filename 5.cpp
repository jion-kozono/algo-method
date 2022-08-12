#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) std::begin(x), std::end(x)

string s, t;
int main() {
  cin >> s >> t;

  int sLength = s.size();
  int tLength = t.size();

  // substrメソッドを使ったやり方
  // bool flag = false;
  // rep(i, sLength - tLength + 1) {
  //   if(s.substr(i, tLength) == t) {
  //     flag = true;
  //   }
  // }

  // 二重ループで探索するやり方(提出)
  rep(i, sLength - tLength + 1) {
    bool isContained = false;
    rep(j, tLength) {
      if(s[i + j] != t[j]) {
        isContained = false;
        break;
      } else {
        isContained = true;
      }
    }
    if(isContained) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
