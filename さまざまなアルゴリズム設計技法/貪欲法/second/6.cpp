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

int N;
double X[1009], Y[1009];
double calcDist(int i, int j) {
  double dist =
      sqrt((X[i] - X[j]) * (X[i] - X[j]) + (Y[i] - Y[j]) * (Y[i] - Y[j]));
  return dist;
}

int main() {
  cin >> N;
  rep(i, N) cin >> X[i] >> Y[i];

  double dist = 0.0;

  vector<bool> seen(N, false);
  seen[0] = true;

  int current = 0;

  // 貪欲法
  rep(_, N - 1) {
    double minDist = INT_MAX;
    int next = -1;
    rep(j, N) {
      if(seen[j])
        continue;
      double d = calcDist(current, j);
      if(d < minDist) {
        minDist = d;
        next = j;
      }
    }

    seen[next] = true;
    dist += minDist;
    current = next;
  }
  //最後に0までの距離を足して終了
  dist += calcDist(current, 0);
  printf("%.8lf", dist);

  return 0;
}
