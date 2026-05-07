#include "header.h"




int calcullep(Node* root, int depth) {
   if (!root) return 0;
   if (!root->left && !root->right) {
       return root->val * depth;
   }


   return calcullep(root->left,depth+1)+calcullep(root->right,depth+1);
}
