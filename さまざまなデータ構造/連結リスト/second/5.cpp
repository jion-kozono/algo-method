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

void connect(int p, int q, vector<int> &front, vector<int> &back) {
  front[p] = q;
  back[q] = p;
}

void contract(int r, vector<int> &front, vector<int> &back) {
  if(back[r] != -1) {
    front[back[r]] = front[r];
  }
  if(front[r] != -1) {
    back[front[r]] = back[r];
  }
  front[r] = back[r] = -1;
}

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> front(N, -1);
  vector<int> back(N, -1);

  rep(i, Q) {
    int type;
    cin >> type;
    if(type == 0) {
      // connect(p, q)
      int p, q;
      cin >> p >> q;
      connect(p, q, front, back);
    } else {
      // contract(r)
      int r;
      cin >> r;
      contract(r, front, back);
    }
  }

  int count = 1;
  int target_front = front[0];
  while(target_front != -1) {
    count++;
    target_front = front[target_front];
  }
  int target_back = back[0];
  while(target_back != -1) {
    count++;
    target_back = back[target_back];
  }

  debug(count);

  return 0;
}
