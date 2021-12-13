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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr;
        ksmall(root , arr,k );
            return arr[k-1];
    }
     void ksmall (TreeNode * root , vector<int>& v,int k)
     {
         if(root!=NULL)
         {
             ksmall(root->left , v,k);
             v.push_back(root->val);
             if(v.size() == k)
                 return ;
             ksmall(root->right , v,k);
         }
     }
};