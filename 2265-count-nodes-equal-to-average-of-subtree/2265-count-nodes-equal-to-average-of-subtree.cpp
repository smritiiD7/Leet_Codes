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
    bool checkSubtreeSum(TreeNode* curr)
    {
      queue<TreeNode*> q1;
        q1.push(curr);
        int count=0;
        int sum=0;
        while(q1.empty()==false)
        {
            int n = q1.size();
            for(int i=0;i<n;i++)
            {
                TreeNode *temp=q1.front();
                q1.pop();
                count++;
                sum+=temp->val;
                if(temp->left) q1.push(temp->left);
                if(temp->right) q1.push(temp->right);
            }
        }
        if(sum/count== curr->val)
            return true;
        return false;
    }
    
    
    
    
    int averageOfSubtree(TreeNode* root) {
        
       queue<TreeNode*> q;
       q.push(root);
        int ans=0;
        
        
        while(q.empty()==false){
            int n = q.size();
            
            for(int i=0;i<n;i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                if(checkSubtreeSum(curr)==true) ans++;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        }
        return ans;
       
        
        
    }
};