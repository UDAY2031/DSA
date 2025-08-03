# Maximum Subarray Sum — Brute Force vs Optimized vs Kadane’s Algorithm

## 📌 Overview
The **Maximum Subarray Sum** problem asks for the largest possible sum of a contiguous subarray within a given integer array (which can include negative numbers).  

This README compares three approaches:
1. **Brute Force** — O(n³)
2. **Optimized (O(n²))**
3. **Kadane’s Algorithm (O(n))**

---

## 🧮 Problem Statement
Given an array of integers, find the contiguous subarray that has the **largest sum**.

Example:
```
Input: [2, -3, 6, -5, 4, 2]
Output: 7
Explanation: The subarray [6, -5, 4, 2] has the maximum sum of 7.
```

---

## 📊 Comparison Table

| Approach                      | Time Complexity | Space Complexity | Description |
|--------------------------------|----------------|------------------|-------------|
| **Brute Force**               | O(n³)          | O(1)             | Checks all possible subarrays and sums them individually. |
| **Optimized O(n²)**           | O(n²)          | O(1)             | Calculates subarray sums incrementally without recomputation. |
| **Kadane’s Algorithm**        | O(n)           | O(1)             | Uses a running sum to track the maximum subarray sum in a single pass. |

---

## 1️⃣ Brute Force Approach
- **Steps**:
  1. Loop over all possible start indices.
  2. For each start index, loop over all possible end indices.
  3. For each subarray, calculate the sum by looping through its elements.
  4. Track the maximum sum found.
- **Pros**: Simple to understand and implement.
- **Cons**: Extremely slow for large arrays.

---

## 2️⃣ Optimized O(n²) Approach
- **Steps**:
  1. Loop over all start indices.
  2. Maintain a running sum for each start index while expanding the end index.
  3. Update the maximum sum without recalculating from scratch.
- **Pros**: Faster than brute force by avoiding redundant sum calculations.
- **Cons**: Still not efficient enough for very large arrays.

---

## 3️⃣ Kadane’s Algorithm (O(n))
- **Steps**:
  1. Initialize `maxsum` and `cursum` to track the best result and current sum.
  2. Iterate through the array, adding each element to `cursum`.
  3. If `cursum` drops below 0, reset it to 0.
  4. Update `maxsum` whenever a larger sum is found.
- **Pros**: Fastest approach with O(n) time complexity.
- **Cons**: Only works for finding sum, not the actual subarray unless modified.

---

## 📝 Example Output
For the input:
```
[2, -3, 6, -5, 4, 2]
```
All approaches return:
```
Maximum sum is : 7
```

---

## 📌 Conclusion
- Use **Brute Force** only for learning or very small arrays.
- Use **O(n²) Optimized** for medium-sized arrays when implementation simplicity is preferred.
- Use **Kadane’s Algorithm** for best performance on large arrays.

---

 
**Language:** C++  
**Category:** Algorithms / Dynamic Programming / Array
