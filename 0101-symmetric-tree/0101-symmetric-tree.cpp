/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        return s(root->left, root->right);
    }
private:
    bool s(TreeNode* l, TreeNode* r){
        if(l == nullptr && r == nullptr){
            return true;
        }
        if(l == nullptr || r == nullptr){
            return false;
        }
        if(l->val != r->val){
            return false;
        }
        return s(l->left, r->right) && s(l->right, r->left);
    }
};