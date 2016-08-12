/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 /*
 queue <TreeNode*>;
 queue.push(root);
 while(!queue.empty())
    val = queue.front()
    queue.pop()
    v.push_back(q->left, q->right)
    print 
    
 
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector <vector<int> > ans;
        
        if(root==NULL)
            return ans;
            
        queue <TreeNode*> q;
        q.push(root);
        vector <int> temp;
        temp.push_back(q.front()->val);
        ans.push_back(temp);
        
        
        while(!q.empty()){
            int len = q.size();
            vector <int> temp;

            while(!q.empty() && len--){
                TreeNode *tempNode = q.front();
                q.pop();
                
                if(tempNode->left!=NULL){
                    temp.push_back(tempNode->left->val);
                    q.push(tempNode->left);
                }
                
                if(tempNode->right!=NULL){
                    temp.push_back(tempNode->right->val);
                    q.push(tempNode->right);
                }
            }
            
            if(temp.size()!=0)
                ans.push_back(temp);

        }
        
        return ans;
    }
};
