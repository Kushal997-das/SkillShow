#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    // Hash map to store the numbers and their indices
    std::unordered_map<int, int> num_to_index;

    // Iterate over the vector
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        
        // Check if the complement exists in the map
        if (num_to_index.find(complement) != num_to_index.end()) {
            return { num_to_index[complement], i };
        }
        
        // Add the current number and its index to the map
        num_to_index[nums[i]] = i;
    }

    // If no solution is found, return an empty vector (optional)
    return {};
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> result = twoSum(nums, target);
    
    if (!result.empty()) {
        std::cout << "Indices: " << result[0] << ", " << result[1] << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}
