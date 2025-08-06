# Trapping Rain Water – Code Comparison

This repository compares two different approaches to solving the "Trapping Rain Water" problem (Leetcode 42):

- Version 1: Prefix-Suffix Array Approach (Original Code)
- Version 2: Two-Pointer Approach (Optimized Code)

---

## ✅ Problem Statement

Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

---

## 🚀 Version 1: Prefix-Suffix Array Approach

In this approach, two arrays are used:

- leftMax[i] stores the maximum height to the left of index i (excluding i itself)
- rightMax[i] stores the maximum height to the right of index i (excluding i itself)

To calculate trapped water at each index:

- Use the formula: min(leftMax[i], rightMax[i]) - height[i]
- If the result is positive, add it to the total trapped water

This method requires two passes to fill the leftMax and rightMax arrays and a third pass to compute the water.

Time Complexity: O(n)  
Space Complexity: O(n)  
Advantages: Easy to implement and understand  
Disadvantages: Consumes extra space for two arrays

---

## ✅ Version 2: Two-Pointer Approach (Optimized)

This approach optimizes space by using two pointers (left and right) and two variables (leftMax and rightMax) to keep track of the maximum heights on both sides.

Algorithm steps:

- Initialize left at 0 and right at n-1
- At each step, compare height[left] and height[right]
- Always process the side with the smaller height
- If the current height is less than the max seen so far, trap water
- Otherwise, update the max height
- Move the pointer accordingly

No extra arrays are used, and everything is calculated on the fly.

Time Complexity: O(n)  
Space Complexity: O(1)  
Advantages: Highly optimized for space  
Disadvantages: Slightly more complex to understand initially

---

## ⚖️ Comparison Table

| Feature           | Prefix-Suffix Array | Two-Pointer (Optimized) |
|------------------|----------------------|--------------------------|
| Time Complexity  | O(n)                 | O(n)                     |
| Space Complexity | O(n)                 | O(1) ✅                  |
| Memory Usage     | High                 | Low ✅                   |
| Simplicity       | Easy to follow       | Slightly more logical    |
| Best For         | Learning basics      | Interviews, performance ✅ |

---

## 📌 Conclusion

Both approaches solve the problem efficiently in terms of time. However, the Two-Pointer approach is more optimal in terms of space, making it a better choice for large datasets or memory-constrained environments. While the Prefix-Suffix method is easier to understand and suitable for beginners, the optimized method is preferred in professional and interview scenarios.

**Recommendation:** Use the Two-Pointer approach whenever possible for optimal space and runtime efficiency.

---
