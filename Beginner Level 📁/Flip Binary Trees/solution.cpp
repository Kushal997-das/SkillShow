#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool check(TreeNode* root1, TreeNode* root2) {
        if (root1 == NULL && root2 == NULL) return true;
        if (root1 == NULL || root2 == NULL || root1->val != root2->val) return false;
        return (check(root1->left, root2->left) && check(root1->right, root2->right)) ||
               (check(root1->left, root2->right) && check(root1->right, root2->left));
    }

    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        return check(root1, root2);
    }
};

// Helper function to build a tree from a list of values
TreeNode* buildTree(const vector<int>& values) {
    if (values.empty() || values[0] == -1) return nullptr;

    TreeNode* root = new TreeNode(values[0]);
    queue<TreeNode*> nodes;
    nodes.push(root);

    int i = 1;
    while (i < values.size()) {
        TreeNode* current = nodes.front();
        nodes.pop();

        // Left child
        if (values[i] != -1) {
            current->left = new TreeNode(values[i]);
            nodes.push(current->left);
        }
        i++;

        // Right child
        if (i < values.size() && values[i] != -1) {
            current->right = new TreeNode(values[i]);
            nodes.push(current->right);
        }
        i++;
    }
    return root;
}

int main() {
    Solution solution;

    // Example input
    vector<int> root1_vals = {1, 2, 3, 4, 5, 6, -1, -1, -1, 7, 8};
    vector<int> root2_vals = {1, 3, 2, -1, 6, 4, 5, -1, -1, -1, -1, 8, 7};

    // Build the trees
    TreeNode* root1 = buildTree(root1_vals);
    TreeNode* root2 = buildTree(root2_vals);

    // Check if the trees are flip equivalent
    bool result = solution.flipEquiv(root1, root2);

    cout << "Are the trees flip equivalent? " << (result ? "Yes" : "No") << endl;

    // Clean up memory (not shown here for simplicity)

    return 0;
}
