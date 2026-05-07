#pragma once
struct Node {
   int val;
   Node* left;
   Node* right;


   Node(int v) {
       val = v;
       left = right = nullptr;
   }
};




struct Compare {
   bool operator()(Node* a, Node* b) {
       return a->val > b->val;
   }
};


int calcullep(Node* root, int depth);
