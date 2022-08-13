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

void changeColor(int &original) { original = 1 - original; }
bool isBlack(int c) { return c == 1; }

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> S(H, vector<int>(W));
  int dx[5] = {0, 1, 0, -1, 0};
  int dy[5] = {0, 0, 1, 0, -1};

  rep(i, H) rep(j, W) {
    char c;
    cin >> c;
    S[i][j] = c == '#' ? 1 : 0;
  }
  int Q;
  cin >> Q;

  rep(i, Q) {
    int query;
    cin >> query;

    if(query == 0) {
      // push
      int p, q;
      cin >> p >> q;
      rep(d, 5) {
        int x = p + dx[d], y = q + dy[d];
        if(0 <= x && x < H && 0 <= y && y < W) {
          changeColor(S[x][y]);
        }
      }
    } else if(query == 1) {
      // get
      int p, q;
      cin >> p >> q;

      int count = 0;
      rep(d, 5) {
        int x = p + dx[d], y = q + dy[d];
        if(0 <= x && x < H && 0 <= y && y < W) {
          if(isBlack(S[x][y]))
            count++;
        }
      }

      debug(count);
    }
  }
  return 0;
}
