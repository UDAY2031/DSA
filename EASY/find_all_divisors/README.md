# Prime Number Checker  
**Difficulty: Easy**  

This program checks whether a given integer is a **prime number** or not. A prime number is a number greater than 1 that has no divisors other than 1 and itself.

---

## 📚 Problem Statement  
Given an integer `n`, determine if `n` is a prime number.

- Return `"Prime"` if the number is prime.  
- Return `"Not Prime"` otherwise.  

---

## 📥 Input  
- An integer `n`  
- **Constraints:**  
```plaintext
1 ≤ n ≤ 10^9
```

---

## 📤 Output  
- Print `"Prime"` if the number is prime.  
- Print `"Not Prime"` otherwise.  

---

## 💡 Examples  

### Example 1:
```plaintext
Input: 
Enter number: 11

Output:
Prime
```
**Explanation:**  
11 is only divisible by 1 and 11, so it is prime.

---

### Example 2:
```plaintext
Input: 
Enter number: 12

Output:
Not Prime
```
**Explanation:**  
12 is divisible by 1, 2, 3, 4, 6, and 12, so it is not prime.

---

### Example 3:
```plaintext
Input: 
Enter number: 1

Output:
Not Prime
```
**Explanation:**  
1 is not considered a prime number.

---

## ⏱️ Time Complexity Analysis  
- **Loop Iteration:**  
  The loop runs until `sqrt(n)`, so the time complexity is:
```plaintext
O(√n)
```

- **Checking Divisors:**  
  Checking divisibility and counting divisors are constant-time operations.  

### Overall Time Complexity:  
```plaintext
O(√n)
```

---

## 💾 Space Complexity Analysis  
- The space required is constant, as the algorithm only uses a few integer variables.  

### Space Complexity:  
```plaintext
O(1)
```

---

## ⚡ Edge Cases to Consider  
- `n = 1`: Not prime.  
- `n = 2`: Prime (smallest prime number).  
- Large prime numbers near `10^9`.  
- Large composite numbers.  
- Perfect squares, e.g., 49, 121, etc.

---

✅ **Happy Coding!** 🎉
