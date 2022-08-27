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

  vector<vector<int>> is_follow(N, vector<int>(N, 0));
  rep(i, Q) {
    int query;
    cin >> query;
    if(query == 0) {
      // Follow
      int x, y;
      cin >> x >> y;
      is_follow[x][y] = 1;
    } else {
      // Get
      int z;
      cin >> z;
      vector<int> z_followers;
      rep(i, N) {
        if(is_follow[i][z])
          z_followers.push_back(i);
      }

      if(z_followers.empty()) {
        debug("No");
      } else {
        rep(i, z_followers.size()) { cout << z_followers[i] << " "; }
        cout << endl;
      }
    }
  }

  // 以下でも間違いではない
  // vector<vector<int>> followers(N);

  // rep(i, Q) {
  //   int query;
  //   cin >> query;
  //   if(query == 0) {
  //     // Follow
  //     int x, y;
  //     cin >> x >> y;
  //     bool is_contained = false;
  //     rep(i, followers[y].size()) {
  //       if(followers[y][i] == x)
  //         is_contained = true;
  //     }
  //     if(!is_contained)
  //       followers[y].push_back(x);
  //   } else {
  //     // Get
  //     int z;
  //     cin >> z;
  //     if(followers[z].empty())
  //       debug("No");
  //     else {
  //       sort(ALL(followers[z]));
  //       rep(i, followers[z].size()) { cout << followers[z][i] << " "; }
  //       cout << endl;
  //     }
  //   }
  // }

  return 0;
}
