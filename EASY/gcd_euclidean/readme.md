# GCD (Greatest Common Divisor) Using Euclidean Algorithm  
**Difficulty: Easy**  

This program finds the **Greatest Common Divisor (GCD)** of two given integers using the **Euclidean Algorithm**.  
The GCD of two integers is the largest integer that divides both numbers without leaving a remainder.

---

## 📚 Problem Statement  
Given two integers `n1` and `n2`, determine their GCD.

- Return the GCD of the two numbers.  

---

## 📥 Input  
- Two integers `n1` and `n2`  
- **Constraints:**  
```
1 ≤ n1, n2 ≤ 10^9
```

---

## 📤 Output  
- Print the GCD of `n1` and `n2`.  

---

## 💡 Examples  

### Example 1:
```
Input: 
Enter number: 36
Enter number: 60

Output:
GCD: 12
```
**Explanation:**  
12 is the largest number that divides both 36 and 60.

---

### Example 2:
```
Input: 
Enter number: 20
Enter number: 28

Output:
GCD: 4
```
**Explanation:**  
4 is the largest number that divides both 20 and 28.

---

### Example 3:
```
Input: 
Enter number: 17
Enter number: 13

Output:
GCD: 1
```
**Explanation:**  
17 and 13 are co-prime, so their GCD is 1.

---

## ⏱️ Time Complexity Analysis  
- **Euclidean Algorithm:**  
  The loop iterates by replacing the larger number with the remainder, reducing the size of the numbers logarithmically.  
  The time complexity is:
```
O(log(min(n1, n2)))
```

---

## 💾 Space Complexity Analysis  
- The space required is constant, as the algorithm only uses a few integer variables.  

### Space Complexity:  
```
O(1)
```

---

## ⚡ Edge Cases to Consider  
- `n1` and `n2` are equal: GCD is the number itself.  
- One of the numbers is 1: GCD is always 1.  
- Large prime numbers: GCD is 1.  
- One number is a multiple of the other: GCD is the smaller number.  
- Both numbers are 1: GCD is 1.

---

✅ **Happy Coding!** 🎉
