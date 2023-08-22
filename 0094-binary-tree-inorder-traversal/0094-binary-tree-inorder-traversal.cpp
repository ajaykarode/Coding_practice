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
// class Solution {
// public:
    
//     void inorder(TreeNode* root,vector<int>&ans){
//         if(root == NULL){
//             return;
//         }       
//         inorder(root->left,ans);
//         ans.push_back(root->val);
//         inorder(root->right,ans);
//     }
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int>ans;
//         if(root == NULL){
//             return ans;
//         }
//         inorder(root,ans);
        
//         return ans;
        
//     }
// };


class Solution {
public:
    
    // 
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        TreeNode* curr = root;
        vector<int>ans;
        
        while(curr!= NULL){
            if(curr->left == NULL){
                ans.push_back(curr->val);
                curr = curr->right;
            }
            else{
                TreeNode* temp = curr->left;
                while(temp->right != NULL && temp->right != curr){
                    temp = temp->right;
                }
                if(temp->right == NULL){
                    temp->right = curr;
                    curr = curr->left;
                }
                else{
                    temp->right = NULL;
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
            
        }
        return ans;
        
 
        
    }
};

