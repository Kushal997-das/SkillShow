#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        // Create a max-heap (priority queue)
        priority_queue<int> maxH;
        long long sum = 0;

        // Insert all elements into the max-heap
        for(int i = 0; i < nums.size(); i++) {
            maxH.push(nums[i]);
        }

        // Process 'k' times
        for(int i = 0; i < k; i++) {
            // Add the largest element (top of the heap) to the sum
            sum += maxH.top();
            int upper = maxH.top();
            maxH.pop();

            // Reduce the element based on the condition and push it back
            if(upper % 3 == 0) {
                upper = upper / 3;
            } else {
                upper = (upper / 3) + 1;
            }
            maxH.push(upper);
        }

        return sum;
    }
};

int main() {
    // Example usage
    Solution sol;
    vector<int> nums = {9, 5, 12, 18};
    int k = 3;
    long long result = sol.maxKelements(nums, k);
    cout << "The maximum sum is: " << result << endl;

    return 0;
}
