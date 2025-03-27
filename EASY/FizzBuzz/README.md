# 🎯 FizzBuzz Counter  
**Difficulty: Easy**  

This program prints the famous **FizzBuzz** sequence up to a given number `n`.  

---

## 📚 Problem Statement  
Given an integer `n`, print the sequence following these rules:  

- Print `"Fizz"` for multiples of **3**.  
- Print `"Buzz"` for multiples of **5**.  
- Print `"FizzBuzz"` for multiples of **both 3 and 5**.  
- Print the number if it does not satisfy any of the above conditions.  

---

## 📥 Input  
- An integer `n`  
- **Constraints:**  
```plaintext
1 ≤ n ≤ 10^6
```

---

## 📤 Output  
- Print the sequence from `1` to `n` following the **FizzBuzz** rules.  

---

## 💡 Examples  

### Example 1:
```plaintext
Input: 
Enter number: 15

Output:
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
```

---

### Example 2:
```plaintext
Input: 
Enter number: 5

Output:
1
2
Fizz
4
Buzz
```

---

### Example 3:
```plaintext
Input: 
Enter number: 3

Output:
1
2
Fizz
```

---

## ⏱️ Time Complexity Analysis  
- **Loop Iteration:**  
  - The loop runs from `1` to `n`, performing constant-time operations.  
  - Therefore, the overall time complexity is:
```plaintext
O(n)
```

---

## 💾 Space Complexity Analysis  
- The space used is constant apart from a few integer variables (`fizz`, `buzz`, and `n`).  
- Thus, the space complexity is:
```plaintext
O(1)
```

---

## ⚡ Edge Cases to Consider  
- `n = 1`: Only prints `1`.  
- `n = 3`: Prints `1, 2, Fizz`.  
- `n = 5`: Prints `1, 2, Fizz, 4, Buzz`.  
- Large values of `n` (e.g., `n = 10^6`).

---

## 🎉 Sample Output  

### Input 1:
```plaintext
Enter number:
15
```
**Output:**
```plaintext
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
```

---

### Input 2:
```plaintext
Enter number:
5
```
**Output:**
```plaintext
1
2
Fizz
4
Buzz
```

---

### Input 3:
```plaintext
Enter number:
3
```
**Output:**
```plaintext
1
2
Fizz
```

---

