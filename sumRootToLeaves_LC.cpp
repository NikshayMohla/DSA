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
    void solve(TreeNode*root,long long &sum,long long temp)
    {
        if(root->left==nullptr&&root->right==nullptr){
            temp=temp*10+root->val;
            sum=sum+temp;
            return;
        }
        temp=temp*10+root->val;
        if(root->left)solve(root->left,sum,temp);
        if(root->right)solve(root->right,sum,temp);
    }
    int sumNumbers(TreeNode* root) {
        long long sum=0;
        solve(root,sum,0);
        return int(sum);
    }
};