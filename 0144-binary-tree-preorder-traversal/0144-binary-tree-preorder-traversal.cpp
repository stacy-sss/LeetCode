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
    vector<int> preorderTraversal(TreeNode* root) {
        std::vector<int> res;
        lists(root, res);
        return res;
    }
private:
    void lists(TreeNode* root, vector<int>& res){
        if(root == nullptr){
            return;
        }
        res.push_back(root->val);
        lists(root->left, res);
        lists(root->right, res);
    }
};