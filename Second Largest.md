## 01. Second Largest

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/second-largest3735/1)

### Problem Description

**Task:** Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.Note: The second largest element should not be equal to the largest element.Examples:Input: arr[] = [12, 35, 1, 10, 34, 1]

#### Examples

##### Example 1

- **Output:**
```text
-1
```
- **Explanation:** The largest element of the array is 10 and the second largest element does not exist.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-17 15:24:06
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int large=-1;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(large<arr[i])
            large=arr[i];
        }
        //for second largest 
        int second=-1;
        
            for(int i=0;i<n;i++){
        if (arr[i] > second && arr[i]<large)
         second=arr[i];
         
            
        }
        return second;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-17 15:23:56
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int large=-1;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(large<arr[i])
            large=arr[i];
        }
        //for second largest 
        int second=-1;
        
            for(int i=0;i<n;i++){
        if (arr[i] > second && arr[i]!= large)
         second=arr[i];
         
            
        }
        return second;
    }
};
```

*Generated on: 10/17/2026, 3:24:49 PM*