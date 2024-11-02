import java.util.HashMap;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        // Create a HashMap to store the numbers and their indices
        HashMap<Integer, Integer> numToIndex = new HashMap<>();

        // Iterate through the array
        for (int i = 0; i < nums.length; i++) {
            // Calculate the complement of the current number
            int complement = target - nums[i];

            // Check if the complement exists in the map
            if (numToIndex.containsKey(complement)) {
                // If found, return the indices of the two numbers
                return new int[] { numToIndex.get(complement), i };
            }

            // Store the current number with its index in the map
            numToIndex.put(nums[i], i);
        }

        // Edge case: if no solution is found, but according to the problem, one solution is guaranteed
        throw new IllegalArgumentException("No solution found");
    }
}
