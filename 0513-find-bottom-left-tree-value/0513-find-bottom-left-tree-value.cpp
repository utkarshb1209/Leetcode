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
    int findBottomLeftValue(TreeNode* r) {
        queue<pair<TreeNode*,int>> q;
        int k=0,ans=0,i1=1;
        q.push({r,k});
        while(q.size()){
            auto x1=q.front();
            TreeNode* x=x1.first;
            int y=x1.second;
            q.pop();
            if(y<i1){
                i1=y;
                ans=x->val; 
            }
            y--;
            if(x->left) q.push({x->left,y});
            if(x->right) q.push({x->right,y});
        }
        return ans;
    }
};