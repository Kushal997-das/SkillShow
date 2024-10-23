class Solution {
    public int maxProduct(int[] nums) {
        int maxProduct = nums[0];
        int currentMax = nums[0];
        int currentMin = nums[0];

        for (int i = 1; i < nums.length; i++) {
            int num = nums[i];
            
            if (num < 0) {
                int temp = currentMax;
                currentMax = currentMin;
                currentMin = temp;
            }
            
            // Calculate the new currentMax and currentMin
            currentMax = Math.max(num, currentMax * num);
            currentMin = Math.min(num, currentMin * num);
            
            // Update the maxProduct found so far
            maxProduct = Math.max(maxProduct, currentMax);
        }

        return maxProduct;
    }

    public static void main(String[] args) {
        Solution solution = new Solution();  // Create an instance of Solution class
        
        int[] nums1 = {2, 3, -2, 4};
        System.out.println("Maximum Product of Subarray for {2, 3, -2, 4}: " + solution.maxProduct(nums1)); // Output: 6
    }
}
