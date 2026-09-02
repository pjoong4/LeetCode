/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int rangeSumBST(struct TreeNode* root, int low, int high) {

    if(root == NULL) return 0;
    int left = rangeSumBST(root->left,low,high);
    int right = rangeSumBST(root->right,low,high);



    if(low <= root->val && root->val <= high)
        return left + right + root->val;
    else 
        return left + right;

}
