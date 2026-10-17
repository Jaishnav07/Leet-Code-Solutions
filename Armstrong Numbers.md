## 01. Armstrong Numbers

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1)

### Problem Description

**Task:** You are given a 3-digit number n, Find whether it is an Armstrong number or not.An Armstrong number of three digits is a number such that the sum of the cubes of its digits is equal to the number itself. 371 is an Armstrong number since 3³ + 7³ + 1³ = 371. Examples:Input: n = 153

#### Examples

##### Example 1

- **Output:**
```text
true
```
- **Explanation:** 153 is an Armstrong number since 1³ + 5³ + 3³ = 153.

##### Example 2

- **Input:**
```text
n = 372
```
- **Output:**
```text
false
```
- **Explanation:** 100 is not an Armstrong number since 1³ + 0³ + 0³ = 1.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(1)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-17 14:28:28
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here

                int ans = 0;
                int p = n;  // n ka backup liya p mein jo aapne OneCompiler mein kiya tha
                int num = n; // num ko iterate karne ke liye use karenge

                while (num != 0) {
                    int rem = num % 10; // rem mein aakhiri digit nikali
                    ans += (rem * rem * rem); // rem ka cube ans mein add kiya
                    num = num / 10; // num ko chota kiya
                }

                if (ans == p) {
                    return 1; // True ke liye 1
                } else {
                    return 0; // False ke liye 0
                }
            }
        };
```

*Generated on: 10/17/2026, 2:28:51 PM*