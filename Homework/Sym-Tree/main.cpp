#include <iostream>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return isMatch(root->left, root->right);
    }
    bool isMatch(TreeNode* tL, TreeNode* tR){
        if(!tL && !tR) return true;

        if(!tL || !tR) return false;

        return (tL->val == tR->val) 
            && isMatch(tL->left, tR->right) 
            && isMatch(tL->right, tR->left);

    }
};