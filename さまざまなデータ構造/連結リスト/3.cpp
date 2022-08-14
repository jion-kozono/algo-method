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
  Node *prev;
  string value;
  Node(const string &value = "") : next(NULL), value(value) {}
};

Node *nil;

void init() {
  nil = new Node();
  nil->next = nil;
  nil->prev = nil;
}

void pushHead(Node *v) {
  v->next = nil->next; // v の次を、元の先頭要素に
  v->prev = nil;       // v の前を nil に
  nil->next = v;       // nil の次を v に書き換える
  (v->next)->prev = v; // 元の先頭要素の前を v にする
  return;
}
void pushTail(Node *v) {
  v->next = nil;
  v->prev = nil->prev;
  nil->prev = v;
  (v->prev)->next = v;
  return;
}

void popHead(Node *head) {
  nil->next = head->next;   // 先頭ポインタを次に移動
  (head->next)->prev = nil; // 新たな先頭の前を nil に
  delete head;              // メモリを開放する
}
void popTail(Node *tail) {
  nil->prev = tail->prev;   // 末尾ポインタを次に移動
  (tail->prev)->next = nil; // 新たな末尾の次を nil に
  delete tail;              // メモリを開放する
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
    } else if(query == 1) {
      // pushTail
      string s;
      cin >> s;
      Node *v = new Node(s);
      pushTail(v);
    } else if(query == 2) {
      // popHead
      Node *head = nil->next;

      if(head == nil) {
        cout << "Error" << endl;
      } else {
        cout << head->value << endl;
        popHead(head);
      }
    } else {
      // popTail
      Node *tail = nil->prev;

      if(tail == nil) {
        cout << "Error" << endl;
      } else {
        cout << tail->value << endl;
        popTail(tail);
      }
    }
  }
  return 0;
}
