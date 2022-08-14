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

struct Node {
  Node *next;
  string value;
  Node(const string &value = "") : next(NULL), value(value) {}
};

Node *nil;

void init() {
  nil = new Node();
  nil->next = nil;
}

void insert(Node *v) {
  v->next = nil->next;
  nil->next = v;
}

int main() {
  init();
  int Q;
  cin >> Q;

  rep(i, Q) {
    int query = 0;
    cin >> query;

    if(query == 0) {
      // insert
      string s;
      cin >> s;

      Node *v = new Node(s);
      insert(v);
    } else {
      // output
      int k;
      cin >> k;

      Node *v = nil;
      rep(i, k) {
        v = v->next;
        if(v == nil)
          break;
        cout << v->value << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
