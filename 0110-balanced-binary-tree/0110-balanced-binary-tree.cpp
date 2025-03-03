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
   
   int hd(TreeNode*root,int&diff ){
    if(!root) return 0;

    int left=hd(root->left,diff);
    int right=hd(root->right,diff);

    diff=max(diff,abs(left-right));
    return max(left,right)+1;
         
   }
    bool isBalanced(TreeNode* root) {
     int diff=0;
     hd(root,diff);
     return diff<=1;

    }
};