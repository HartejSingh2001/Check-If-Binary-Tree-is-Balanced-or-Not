//Leetcode accepted answer
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
    bool isBalanced(TreeNode* root) {
       if(height(root)==-1)
       {
           return false;
       }
        else
        {
            return true;
        }
    }
    int height(TreeNode *node)
    {
        if(node==NULL)
        {
            return 0;
        }
        int lh=height(node->left);
        if(lh==-1)
        {
            return -1;
        }
        int rh=height(node->right);
        if(rh==-1)
        {
            return -1;
        }
        if(abs(lh-rh)>1)
        {
            return -1;
        }
        return 1+max(lh,rh);
    }
};
