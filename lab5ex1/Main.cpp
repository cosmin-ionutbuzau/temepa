#include <iostream>
#include <queue>
#include "header.h"
using namespace std;


int main() {
   int n, val;
   cin >> n;
   priority_queue<Node*, vector<Node*>, Compare> B;
   for (int i = 0; i < n; i++) {
       cin >> val;
       B.push(new Node(val));
   }


   while (B.size() > 1) {
       Node* t1 = B.top();
       B.pop();
       Node* t2 = B.top();
       B.pop();
       Node* t = new Node(t1->val + t2->val);
       t->left = t1;
       t->right = t2;
       B.push(t);
   }


   Node* root = B.top();
   cout << calcullep(root, 0);


   return 0;
}
