Problem:
Given the root of a binary tree, return the inorder traversal of its nodes' values.

Input:

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
void func(TreeNode* node,vector<int> &inorder)
{
    if(node==NULL)
    return;
    func(node->left,inorder);
    inorder.push_back(node->val);
    func(node->right,inorder);
}
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> inorder;
        func(root,inorder);
        return inorder;
    }
};
