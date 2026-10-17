## 01. Trailing Zeroes in Factorial

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1)

### Problem Description

**Task:** For an integer n, find the number of trailing zeroes in n!.Examples :Input: n = 5

#### Examples

##### Example 1

- **Output:**
```text
0
```
- **Explanation:** 4! = 24 so the number of trailing zero is 0.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(log n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-17 13:32:38
- **Status:** Correct
- **Marks:** 0

```cpp
//User function Template for C++
class Solution
{
public:
    int trailingZeroes(int N)
    {
        int count = 0;

        while(N>=5)
        {
            count+= N/5;
            N/=5;
        }

        return count;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-16 00:45:43
- **Status:** Correct
- **Marks:** 2

```cpp
//User function Template for C++
class Solution
{
public:
    int trailingZeroes(int N)
    {
        int count = 0;

        while(N>=5)
        {
            count+= N/5;
            N/=5;
        }

        return count;
    }
};
```

*Generated on: 10/17/2026, 1:32:51 PM*