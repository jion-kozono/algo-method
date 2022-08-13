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
    bool queryReverse = queryType == 0;
    bool queryPush = queryType == 1;
    bool queryPop = queryType == 2;

    if(queryReverse) {
      reverse(ALL(a));
      continue;
    }
    if(queryPush) {
      int v;
      cin >> v;
      a.push_back(v);
      continue;
    }
    if(queryPop) {
      int size = a.size();
      if(size == 0)
        debug("Error");
      else {
        debug(a[size - 1]);
        a.pop_back();
      }
      continue;
    }
  }
  return 0;
}
