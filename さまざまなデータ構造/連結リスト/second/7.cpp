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

void overtake(int v, vector<int> &front, vector<int> &back) {
  if(front[v] == -1) {
    debug("Error");
  } else {
    int f = front[v], b = back[v];
    debug(f);
    if(front[f] != -1)
      back[front[f]] = v;
    if(b != -1)
      front[b] = f;
    front[v] = front[f], front[f] = v;
    back[v] = f, back[f] = b;
  }
}

void dropout(int v, vector<int> &front, vector<int> &back) {
  int f = front[v], b = back[v];
  if(b != -1) {
    front[b] = f;
  }
  if(f != -1) {
    back[f] = b;
  }

  front[v] = back[v] = -1;
}

int main() {
  int N, Q;
  cin >> N;
  vector<int> front(N, -1);
  vector<int> back(N, -1);
  vector<int> A(N);
  cin >> A[0];
  rep3(i, 1, N) {
    cin >> A[i];
    front[A[i]] = A[i - 1];
    back[A[i - 1]] = A[i];
  }

  cin >> Q;
  rep(i, Q) {
    int type;
    cin >> type;
    if(type == 0) {
      // overtake(v)
      int v;
      cin >> v;
      overtake(v, front, back);
    } else {
      // dropout(v)
      int v;
      cin >> v;
      dropout(v, front, back);
    }
  }

  return 0;
}
