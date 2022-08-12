#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) std::begin(x), std::end(x)

int n;
string s, t;
int main() {
  cin >> n >> s >> t;

  int count = 0;
  int length = s.size();
  rep(i, length) {
    if(s[i] != t[i])
      count++;
  }

  cout << count << endl;
  return 0;
}
