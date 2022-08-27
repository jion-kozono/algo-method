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
  int N;
  string T;
  cin >> N >> T;

  vector<int> studentM(N);
  vector<vector<string>> studentColors(N);

  rep(i, N) {
    int m;
    cin >> m;
    studentM[i] = m;
    rep(j, m) {
      string color;
      cin >> color;
      studentColors[i].push_back(color);
    }
  }

  int count = 0;
  rep(i, N) {
    bool flag = false;
    rep(j, studentColors[i].size()) {
      if(studentColors[i][j] == T) {
        flag = true;
        break;
      }
    }
    if(flag)
      count++;
  }
  debug(count);
  return 0;
}
