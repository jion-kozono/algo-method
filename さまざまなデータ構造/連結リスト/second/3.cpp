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
  Node *nex;
  Node *pre;
  string value;
  Node(const string value = "") : nex(NULL), pre(NULL), value(value) {}
};

Node *nil;

void init() {
  nil = new Node();
  nil->nex = nil;
  nil->pre = nil;
}

void pushHead(Node *v) {
  v->nex = nil->nex;
  v->pre = nil;
  nil->nex = v;
  (v->nex)->pre = v;
}

void popTail(Node *v) {
  (v->pre)->nex = nil;
  nil->pre = v->pre;
}

int main() {
  init();
  int Q;
  cin >> Q;

  rep(i, Q) {
    int type;
    cin >> type;
    if(type == 0) {
      // pushHead(s)
      string s;
      cin >> s;
      Node *v = new Node(s);
      pushHead(v);
    } else {
      // popTail()
      Node *v = nil->pre;
      if(v == nil) {
        debug("Error");
      } else {
        popTail(v);
        debug(v->value);
      }
    }
  }
  return 0;
}
