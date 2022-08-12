#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N, V;
  cin >> N >> V;

  int index = -1;
  rep(i, N) {
    int a;
    cin >> a;
    if(a == V) {
      index = i;
    }
  }

  cout << index << endl;
  return 0;
}
