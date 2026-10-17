## 01. Reverse Array

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/reverse-an-array/1)

### Problem Description

**Task:** You are given an array of integers arr[]. You have to reverse the given array.

> **Note:** Modify the array in place.

#### Examples

##### Example 1

- **Input:**
```text
arr = [1, 4, 3, 2, 6, 5]
```
- **Output:**
```text
[5, 6, 2, 3, 4, 1]Explanation: The elements of the array are [1, 4, 3, 2, 6, 5]. After reversing the array, the first element goes to the last position, the second element goes to the second last position and so on. Hence, the answer is [5, 6, 2, 3, 4, 1].
```

##### Example 2

- **Input:**
```text
arr = [4, 5, 2]
```
- **Output:**
```text
[2, 5, 4]Explanation: The elements of the array are [4, 5, 2]. The reversed array will be [2, 5, 4].
```

##### Example 3

- **Input:**
```text
arr = [1]
```
- **Output:**
```text
[1]Explanation: The array has only single element, hence the reversed array is same as the original.
```

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-17 16:24:53
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n=arr.size();
              for(int i=0;i<n/2;i++){
                  swap(arr[i],arr[n-i-1]);
              }

    }
};
```

*Generated on: 10/17/2026, 4:29:56 PM*