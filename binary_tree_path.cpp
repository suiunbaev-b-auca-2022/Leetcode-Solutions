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
    vector<string> binaryTreePaths(TreeNode *root) {
        vector<string> paths;
        binaryTreePaths(root, paths, "");
        return paths;
    }

private:
    void binaryTreePaths(TreeNode *root, vector<string> &paths, string currentPath) {
        // Update current path
        currentPath += to_string(root->val) + "->";

        // Base case, end of path
        if (root->left == nullptr && root->right == nullptr) {
            paths.push_back(currentPath.substr(0, currentPath.length() - 2));
            return;
        }

        // Go left if left exists
        if (root->left != nullptr) {
            binaryTreePaths(root->left, paths, currentPath);
        }

        // Go right if right exists
        if (root->right != nullptr) {
            binaryTreePaths(root->right, paths, currentPath);
        }
    }
};
