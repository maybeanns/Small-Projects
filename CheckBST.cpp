#include <iostream>
#include <climits>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value) : val(value), left(nullptr), right(nullptr) {}
};

bool isBSTUtil(TreeNode* node, int min, int max) {
    if (node == nullptr) {
        return true;
    }

    // Check if the current node's value is within the valid range
    if (node->val < min || node->val > max) {
        return false;
    }

    // Recursively check the left and right subtrees with updated min and max values
    return isBSTUtil(node->left, min, node->val - 1) && isBSTUtil(node->right, node->val + 1, max);
}

bool isBST(TreeNode* root) {
    // Call the utility function with initial minimum and maximum values
    return isBSTUtil(root, INT_MIN, INT_MAX);
}

int main() {
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    if (isBST(root)) {
        std::cout << "The tree is a Binary Search Tree." << std::endl;
    } else {
        std::cout << "The tree is not a Binary Search Tree." << std::endl;
    }

    // Don't forget to deallocate memory to prevent memory leaks (this is a simplified example without proper cleanup)
    
    return 0;
}
