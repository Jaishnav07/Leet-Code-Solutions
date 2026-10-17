## 01. Missing in Array

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1)

### Problem Description

**Task:** You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.Examples:Input: arr[] = [1, 2, 3, 5]

#### Examples

##### Example 1

- **Output:**
```text
2
```
- **Explanation:** Only 1 is present so the missing element is 2.Constraints:1 ≤ arr.size() ≤ 10⁶¹ ≤ arr[i] ≤ arr.size() + 1

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-17 15:39:12
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long long k=arr.size();
        long long n=k+1; // one element is missing in the given array
        long long originalsum=n*(n+1)/2;
        long long sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        long long missing=originalsum-sum;
        return missing;
    }
};
```

*Generated on: 10/17/2026, 3:40:12 PM*