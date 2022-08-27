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

int N, X;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int get_live_count(int x, int y, vector<vector<int>> &G) {
  int count = 0;
  rep(d, 8) {
    int nx = x + dx[d];
    int ny = y + dy[d];
    if(0 <= nx && nx < N && 0 <= ny && ny < N)
      count += G[nx][ny];
  }
  return count;
}

int main() {
  cin >> N >> X;
  vector<vector<int>> G(N, vector<int>(N));
  int dx[5] = {0, 1, 0, -1, 0};
  int dy[5] = {0, 0, 1, 0, -1};

  rep(i, N) rep(j, N) {
    char c;
    cin >> c;
    G[i][j] = c == '#' ? 1 : 0;
  }
  rep(x, X) {
    //　全てのマスが他の更新の影響を受けないようにするために別配列をGからコピー。
    vector<vector<int>> original = G;
    rep(i, N) {
      rep(j, N) {
        int live_count = get_live_count(i, j, original);
        // 自身が死んでいるかつ x=3 ならば生きたマスとなる。
        if(original[i][j] == 0 && live_count == 3) {
          G[i][j]++;
        }
        // 自身が生きているかつ x=2 or 3 ならば生き続ける。
        else if(original[i][j] && (live_count == 2 || live_count == 3))
          continue;
        // 自身が生きているかつ x≤1 ならば過疎により死滅する。
        else if(original[i][j] && live_count <= 1)
          G[i][j]--;
        // 自身が生きているかつ x≥4 ならば過密により死滅する。
        else if(original[i][j] && live_count >= 4)
          G[i][j]--;
      }
    }
  }

  rep(i, N) {
    rep(j, N) { cout << (G[i][j] ? '#' : '.'); }
    cout << endl;
  }
  return 0;
}
