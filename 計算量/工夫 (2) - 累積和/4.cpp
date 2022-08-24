#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) x.begin(), x.end()
#define debug(var)                                                             \
  do {                                                                         \
    view(var);                                                                 \
  } while(0)
#define debugN(var)                                                            \
  do {                                                                         \
    std::cout << #var << " : ";                                                \
    view(var);                                                                 \
  } while(0)
template <typename T> void view(T e) { std::cout << e << std::endl; }
template <typename T> void view(const std::vector<T> &v) {
  for(const auto &e : v) {
    std::cout << e << " ";
  }
  std::cout << std::endl;
}
template <typename T> void view(const std::vector<std::vector<T>> &vv) {
  for(const auto &v : vv) {
    view(v);
  }
}

int main() {
  int N, D;
  cin >> N >> D;
  vector<int> X(N);
  vector<int> acc(N + 1);
  rep(i, N) {
    int x;
    cin >> x;
    X[i] = x;
    acc[i + 1] = x + acc[i];
  }

  int max_sum = 0;
  int last_index = 0;
  rep3(i, D, N + 1) {
    if(acc[i] - acc[i - D] >= max_sum) {
      max_sum = acc[i] - acc[i - D];
      last_index = i - 1;
    }
  }

  int before_index = last_index - (D - 1);
  cout << before_index << "~" << last_index << endl;

  return 0;
}
