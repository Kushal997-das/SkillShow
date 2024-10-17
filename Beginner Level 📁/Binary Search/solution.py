def binary_search(nums,target):
    n=len(nums)
    low=0
    high=n-1
    while low<=high:
        mid=(low+high)//2
        if nums[mid]==target:
            return mid
        elif nums[mid]>target:
            high=mid-1
        else:
            low=mid+1
    return -1

nums=list(map(int,input("Enter the list of numbers : ").split()))
target=int(input("Enter the target number you need to search : "))
print("The target is found in : ",binary_search(nums,target))
