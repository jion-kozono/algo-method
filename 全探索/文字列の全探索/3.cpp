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

  int count = 0;
  int length = s.size();
  rep(i, length - 1) {
    if(s[i] == s[i + 1])
      count++;
  }

  cout << count << endl;
  return 0;
}
