# Search in Rotated Sorted Array

## Problem Statement

You are given an integer array `nums` sorted in ascending order (with **distinct** values) and then **rotated at an unknown pivot**. You are also given an integer `target`.  
Return the index of `target` if it is in `nums`, or `-1` if it is not in `nums`.  
You must write an algorithm with **O(log n)** runtime complexity.

### Example

```text
Input: nums = [4,5,6,7,0,1,2], target = 0  
Output: 4

Input: nums = [4,5,6,7,0,1,2], target = 3  
Output: -1
```

---

## 🌱 Brute Force Approach – Linear Search

### Idea:
We simply iterate through each element in the array and compare it with the target.

### Time Complexity:
- **O(n)** — Worst-case time for scanning all elements.
- **Space Complexity: O(1)** — No extra space used.

### Pros:
- Very simple and easy to implement.
- Works for all types of arrays, rotated or not.

### Cons:
- Inefficient for large arrays.
- Does not meet the O(log n) constraint.

---

## ⚡ Optimized Approach – Modified Binary Search

### Idea:
Even though the array is rotated, one half is always sorted.  
We use this property to decide whether to search in the left half or the right half.

### Logic:
- Find `mid`.
- Determine which half is sorted.
- Check if the target lies in the sorted half.
  - If **yes**, narrow search to that half.
  - If **no**, search the other half.

### Time Complexity:
- **O(log n)** — Binary search logic is preserved.
- **Space Complexity: O(1)** — No extra space used.

### Pros:
- Very efficient, meets the O(log n) requirement.
- Works correctly even when the array is rotated.

### Cons:
- Slightly more complex to implement than linear search.
- Needs careful handling of edge cases (like single element arrays or rotation at edges).

---

## 🔍 Comparison Table

| Approach           | Time Complexity | Space Complexity | Works with Rotated Array | Simplicity | Efficiency |
|--------------------|------------------|--------------------|---------------------------|------------|-------------|
| Linear Search       | O(n)             | O(1)               | ✅                        | ✅ Simple   | ❌ Slow     |
| Modified Binary Search | O(log n)       | O(1)               | ✅                        | ⚠️ Moderate | ✅ Fast     |

---

## ✅ Conclusion

- Use **Linear Search** for understanding or when the array size is small.
- Use **Modified Binary Search** for optimal performance and when asked for `O(log n)` complexity.
