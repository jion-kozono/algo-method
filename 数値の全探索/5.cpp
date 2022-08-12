#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) std::begin(x), std::end(x)

int main() {
  int N;
  cin >> N;

  int count = 0;
  rep3(i, 1, N + 1) {
    // i が 3 でも 5 でも割り切れるならば FizzBuzz を出力し、
    if(i % 3 == 0 && i % 5 == 0)
      cout << "FizzBuzz" << endl;
    // それ以外で i が 3 で割り切れるならば Fizz を出力し、
    else if(i % 3 == 0)
      cout << "Fizz" << endl;
    // それ以外で i が 5 で割り切れるならば Buzz を出力し、
    else if(i % 5 == 0)
      cout << "Buzz" << endl;
    // i がどちらでも割り切れないならば i 自身を出力してください。
    else
      cout << i << endl;
  }

  return 0;
}
