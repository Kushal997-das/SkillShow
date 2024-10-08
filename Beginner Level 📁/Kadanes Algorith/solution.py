import sys

def maxSubarraySum(arr, n):
    maxi = -sys.maxsize-1 # maximum sum
    sum = 0

    for i in range(n):
        sum += arr[i]

        if sum > maxi:
            maxi = sum

        # If sum < 0: discard the sum calculated
        if sum < 0:
            sum = 0

    # To consider the sum of the empty subarray
    # uncomment the following check:

    #if maxi < 0: maxi = 0

    return maxi

arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
n = len(arr)
maxSum = maxSubarraySum(arr, n)
print("The maximum subarray sum is:", maxSum)