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
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  vector<int> fronts;

  int Q;
  cin >> Q;
  rep(i, Q) {
    int query_type;
    cin >> query_type;
    if(query_type == 0) {
      // PushFront
      int v;
      cin >> v;
      fronts.push_back(v);
    } else if(query_type == 1) {
      // PushBack
      int v;
      cin >> v;
      A.push_back(v);
    } else {
      // Get
      int k;
      cin >> k;
      if(fronts.size() + A.size() <= k) {
        debug("Error");
      } else {
        if(fronts.size() > k) {
          debug(fronts[fronts.size() - 1 - k]);
        } else {
          debug(A[k - fronts.size()]);
        }
      }
    }
  }
  return 0;
}
