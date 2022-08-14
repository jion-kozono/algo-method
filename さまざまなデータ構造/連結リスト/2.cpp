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

void pushHead(Node *v) {
  v->next = nil->next;
  nil->next = v;
}

void popHead(Node *head) {
  nil->next = head->next; // 先頭ポインタを次に移動
  delete head;            // メモリを開放する
}

int main() {
  init();
  int Q;
  cin >> Q;

  rep(i, Q) {
    int query = 0;
    cin >> query;

    if(query == 0) {
      // pushHead
      string s;
      cin >> s;

      Node *v = new Node(s);
      pushHead(v);
    } else {
      // popHead
      Node *head = nil->next;

      if(head == nil) {
        cout << "Error" << endl;
      } else {
        cout << head->value << endl;
        popHead(head);
      }
    }
  }
  return 0;
}
