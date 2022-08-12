#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) std::begin(x), std::end(x)

int main() {
  string s;
  cin >> s;
  int length = s.size();
  map<char, int> countMap;

  rep(i, length) {
    char c = s[i];
    countMap[c]++;
  }
  cout << countMap.size() << endl;
  return 0;
}
