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
    void LargestSum(vector<long long>& arr, TreeNode* root, int level) {
        if (root == NULL) return;

        if (level >= arr.size()) {
            arr.push_back(root->val);
        } else {
            arr[level] += root->val; 
        }

        LargestSum(arr, root->left, level + 1);
        LargestSum(arr, root->right, level + 1);
    }

    long long kthLargestLevelSum(TreeNode* root, int k) {
        if (!root) return -1;
        vector<long long> arr;
        LargestSum(arr, root, 0);

        priority_queue<long long, vector<long long>, greater<long long>> minHeap;

        // Iterate through level sums and maintain the top k sums
        for (long long sum : arr) {
            minHeap.push(sum);
            if (minHeap.size() > k) {
                minHeap.pop(); // Maintain only k largest sums
            }
        }

        // If there are less than k levels, return -1
        if (minHeap.size() < k) return -1;

        return minHeap.top();
    }
};

// Helper function to build a tree from a level-order array
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
        if (i < values.size() && values[i] != -1) {
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
    vector<int> root_vals = {5, 8, 9, 2, 1, 3, 7, 4, 6};
    int k = 2;

    // Build the tree from the given level-order array
    TreeNode* root = buildTree(root_vals);

    // Get the kth largest level sum
    long long result = solution.kthLargestLevelSum(root, k);

    cout << "The " << k << "-th largest level sum is: " << result << endl;

    // Expected Output: 13
    // Explanation:
    // - Level 1: 5
    // - Level 2: 8 + 9 = 17
    // - Level 3: 2 + 1 + 3 + 7 = 13
    // - Level 4: 4 + 6 = 10

    // Clean up memory if needed
    return 0;
}
