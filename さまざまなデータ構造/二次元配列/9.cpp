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
  cin >> N >> Q;

  vector<vector<int>> isFollow(N, vector<int>(N, 0));

  rep(i, Q) {
    int query;
    cin >> query;

    if(query == 0) {
      // Follow
      int x, y;
      cin >> x >> y;
      isFollow[x][y] = 1;
    } else if(query == 1) {
      // GetFollowers
      int z;
      cin >> z;

      vector<int> zFollowers;
      rep(j, N) {
        if(isFollow[j][z] == 1)
          zFollowers.push_back(j);
      }

      int z_size = zFollowers.size();
      if(z_size > 0) {
        sort(ALL(zFollowers));
        rep(j, z_size) { cout << zFollowers[j] << " "; }
        cout << endl;
      } else {
        debug("No");
      }
    }
  }
  return 0;
}
