#include <bits/stdc++.h>
using namespace std;
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr){
            return {};
        }

        vector<vector<int>> ans;
        
        queue<TreeNode*>q;

        q.push(root);

        while(!q.empty()){
            vector<int>currentLevel;
            int size = q.size();
            for(int i = 0 ; i<size;i++){
                TreeNode* currentNode = q.front();
                currentLevel.push_back(currentNode->val);
                if(currentNode->left!=nullptr){
                    q.push(currentNode->left);
                }
                if(currentNode->right!=nullptr){
                    q.push(currentNode->right);
                }
                q.pop();
            }
            ans.push_back(currentLevel);
        }

        return ans;
    }
};