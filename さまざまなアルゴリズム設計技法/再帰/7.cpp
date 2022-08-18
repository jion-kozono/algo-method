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

vector<vector<int>> func(int n, int l, int r) {
  if(l > r)
    return {};
  if(n == 0)
    return {{}};
  vector<vector<int>> answers;

  for(auto x : func(n - 1, l, r)) {
    vector<int> to = {l};
    to.insert(to.end(), ALL(x));
    answers.push_back(to);
  }

  for(auto x : func(n, l + 1, r)) {
    answers.push_back(x);
  }

  return answers;
}

int main() {
  int N, L, R;
  cin >> N >> L >> R;

  for(auto ans : func(N, L, R)) {
    rep(i, ans.size()) { cout << ans[i] << " "; }
    cout << endl;
  }

  return 0;
}
