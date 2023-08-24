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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>>ans;
//         if(root == NULL) return ans;
//         queue<TreeNode*> q;
//         bool lefttoright = true;
//         q.push(root);
//         while(!q.empty()){
//             int n = q.size();
//             vector<int> temp(n);
//             for(int i = 0;i<n;i++){
//                 TreeNode* node = q.front();
//                 q.pop();
//                 int index = (lefttoright) ? i : (n - 1 - i);
//                 temp[index] = node->val;
                
//                 if(node->left) q.push(node->left);
//                 if(node->right) q.push(node->right);
//             }
//             lefttoright = !lefttoright; 
//             ans.push_back(temp);
//         }
//         return ans;
      
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        vector<vector<int>>ans;
        if(root == NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool lefttoright = true;
        
        while(!q.empty()){
            int size = q.size();
            vector<int>row(size);
            
            for(int i = 0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();
                int index = lefttoright ? i : (size - 1 - i);
                row[index] = temp->val;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            
            lefttoright = !lefttoright;
            ans.push_back(row);
            
            
        }
        return ans;
    }
    
};