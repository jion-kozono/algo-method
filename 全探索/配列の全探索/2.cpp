#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N, V;
  cin >> N >> V;

  int count = 0;
  rep(i, N) {
    int a;
    cin >> a;
    if(a == V) {
      count++;
    }
  }

  cout << count << endl;
  return 0;
}
