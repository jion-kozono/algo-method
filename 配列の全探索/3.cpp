#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;

  int count = 0;
  rep(i, N) {
    int a;
    cin >> a;
    if(a > 0) {
      count++;
    }
  }

  cout << count << endl;
  return 0;
}
