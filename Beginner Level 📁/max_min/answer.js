function maxMinDifference(arr) {
    // Method 1: Using Math.min and Math.max
    const minVal = Math.min(...arr);
    const maxVal = Math.max(...arr);
    return maxVal - minVal;
}

// Example usage:
console.log(maxMinDifference([7, 3, 8, 4])); // Output: 5
