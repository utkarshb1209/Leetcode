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
    vector<vector<int>> verticalTraversal(TreeNode* r) {
        queue<pair<TreeNode*,pair<int,int>>> q;
        map<int,map<int,multiset<int>>> m;
        q.push({r,{0,0}});
        while(q.size()){
            auto p=q.front();
            q.pop();
            TreeNode* t=p.first;
            int a=p.second.first;
            int b=p.second.second;
            if(t->left) q.push({t->left,{a-1,b+1}});
            if(t->right) q.push({t->right,{a+1,b+1}});
            m[a][b].insert(t->val);
        }
        vector<vector<int>> ans;
        for(auto a1:m){
            vector<int> v1;
            for(auto a2:a1.second){
                
                for(auto a3:a2.second){
                    v1.push_back(a3);
                }
                
            }ans.push_back(v1);
        }return ans;
    }
};