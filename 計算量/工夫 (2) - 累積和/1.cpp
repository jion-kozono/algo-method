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
  int N, Q;
  cin >> N;
  vector<int> A(N);
  vector<int> sumList;

  rep(i, N) {
    int a;
    cin >> a;
    A[i] = a;
    if(i == 0)
      sumList.push_back(a);
    else
      sumList.push_back(sumList[i - 1] + a);
  }

  cin >> Q;
  rep(i, Q) {
    int k;
    cin >> k;
    k--;

    debug(sumList[k]);
  }
  return 0;
}
