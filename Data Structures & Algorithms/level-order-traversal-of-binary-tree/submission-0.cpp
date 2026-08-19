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
    // vector<vector<int>> v;
    void level(TreeNode* root,int l,vector<vector<int>>& ans){
        if (root==NULL) return;
        if (ans.size()==l){
            ans.push_back({});
        }
        ans[l].push_back(root->val);
        level(root->left,l+1,ans);
        level(root->right,l+1,ans);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        level(root,0,ans);
        return ans;
    }
};
