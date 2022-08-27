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
  vector<int> sumRow(H, 0), sumColumn(W, 0);
  int dx[5] = {0, 1, 0, -1, 0};
  int dy[5] = {0, 0, 1, 0, -1};

  rep(i, H) rep(j, W) {
    char c;
    cin >> c;
    if(c == '#') {
      S[i][j] = 1;
      sumRow[i]++;
      sumColumn[j]++;
    } else {
      S[i][j] = 0;
    }
  }
  int Q;
  cin >> Q;

  rep(i, Q) {
    int p, q;
    cin >> p >> q;

    int count = sumRow[p] + sumColumn[q] - S[p][q];
    debug(count);
  }
  return 0;
}
