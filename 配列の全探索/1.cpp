#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N, V;
  cin >> N >> V;

  bool hasValue = false;
  rep(i, N) {
    int a;
    cin >> a;
    if(a == V) {
      hasValue = true;
      break;
    }
  }

  cout << (hasValue ? "Yes" : "No") << endl;
  return 0;
}
