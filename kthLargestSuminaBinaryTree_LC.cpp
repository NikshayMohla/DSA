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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
        int n;
        long long int sum = 0;
        q.push(root);
        TreeNode* p;
        vector<long long int> v;
        while(!q.empty()){
            n = q.size();
            sum = 0;
            while(n--){
                p = q.front();
                q.pop();
                sum += p->val;
                if(p->left){
                    q.push(p->left);
                    
                }
                if(p->right){
                    q.push(p->right);
                }
            }
            v.push_back(sum);
        }
        if(v.size()<k)return -1;
        sort(v.begin(),v.end());
        return v[v.size()-k];
    }
};