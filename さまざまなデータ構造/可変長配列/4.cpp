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
  int n;
  cin >> n;
  vector<int> a;
  rep(i, n) {
    int v;
    cin >> v;
    a.push_back(v);
  }

  int q;
  cin >> q;
  rep(i, q) {
    int queryType;
    cin >> queryType;
    bool queryInsert = queryType == 0;
    bool queryErase = queryType == 1;
    bool queryCount = queryType == 2;
    if(queryInsert) {
      int k, v;
      cin >> k >> v;
      auto it = a.begin() + k;
      a.insert(it, v);
      continue;
    }
    if(queryErase) {
      int k;
      cin >> k;
      auto it = a.begin() + k;
      a.erase(it);
      continue;
    }
    if(queryCount) {
      int v;
      cin >> v;
      cout << count(ALL(a), v) << endl;
      continue;
    }
  }
  return 0;
}
