## 01. Largest in Array

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1)

### Problem Description

**Task:** Given an array arr[]. The task is to find the largest element and return it.Examples:Input: arr[] = [1, 8, 7, 56, 90]

#### Examples

##### Example 1

- **Output:**
```text
10
```
- **Explanation:** There is only one element which is the largest.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-17 15:12:32
- **Status:** Correct
- **Marks:** 1

```cpp
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int large=arr[0];
               int n=arr.size();
                for(int i=0;i<n;i++){
                    if(large<arr[i])
                    large = arr[i] ;}
    
    return large;
     
    }
};
```

*Generated on: 10/17/2026, 3:12:57 PM*