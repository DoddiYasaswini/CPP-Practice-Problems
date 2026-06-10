# Module 1 - Conditions

This module covers fundamental conditional statement problems using `if`, `if-else`, and nested conditions.

## Problems Covered

1. Even or Odd
2. Largest of 3 Numbers
3. Check Leap Year
4. Perfect Square Check
5. Prime Number Check
6. Palindrome Number Check
7. Armstrong Number Check
8. Strong Number Check
9. Perfect Number Check
10. Composite Number Check

---

# 1. Even or Odd

## Problem Statement
Determine whether a given integer is even or odd.

## Algorithm
1. Read the number.
2. Check if `n % 2 == 0`.
3. If true, print Even.
4. Otherwise, print Odd.

## Dry Run

Input:
8

Execution:
8 % 2 = 0

Output:
8 is even number

## Time Complexity
O(1)

## Space Complexity
O(1)

## Code
See: `Even_or_Odd.cpp`

---

# 2. Largest of 3 Numbers

## Problem Statement
Find the largest among three given numbers.

## Algorithm
1. Read three numbers.
2. Compare all numbers using conditions.
3. Print the largest value.

## Dry Run

Input:
10 25 15

Execution:
25 > 10
25 > 15

Output:
Largest = 25

## Time Complexity
O(1)

## Space Complexity
O(1)

## Code
See: `Largest_of_3_Numbers.cpp`

---

# 3. Check Leap Year

## Problem Statement
Check whether a given year is a leap year.

## Algorithm
1. If divisible by 400 → Leap Year.
2. Else if divisible by 100 → Not Leap Year.
3. Else if divisible by 4 → Leap Year.
4. Otherwise → Not Leap Year.

## Dry Run

Input:
2024

Execution:
2024 % 4 = 0
2024 % 100 != 0

Output:
Leap Year

## Time Complexity
O(1)

## Space Complexity
O(1)

## Code
See: `Leap_Year.cpp`

---

# 4. Perfect Square Check

## Problem Statement
Check whether a given number is a perfect square.

## Algorithm
1. Start from i = 1.
2. Keep increasing i until i² ≥ n.
3. If i² = n → Perfect Square.
4. Else → Not Perfect Square.

## Dry Run

Input:
25

Execution:
1² = 1
2² = 4
3² = 9
4² = 16
5² = 25

Output:
Perfect Square

## Time Complexity
O(√N)

## Space Complexity
O(1)

## Code
See: `Perfect_Square_Check.cpp`

---

# 5. Prime Number Check

## Problem Statement
Check whether a given number is prime.

## Algorithm
1. Count factors of the number.
2. If factor count equals 2 → Prime.
3. Otherwise → Not Prime.

## Dry Run

Input:
7

Execution:
Factors = 1, 7
Count = 2

Output:
Prime Number

## Time Complexity
O(N)

## Space Complexity
O(1)

## Code
See: `Prime_Number_Check.cpp`

---

# 6. Palindrome Number Check

## Problem Statement
Check whether a number remains the same when reversed.

## Algorithm
1. Reverse the number.
2. Compare original and reversed numbers.
3. If equal → Palindrome.
4. Else → Not Palindrome.

## Dry Run

Input:
121

Execution:
Reverse = 121

Output:
Palindrome Number

## Time Complexity
O(D)

## Space Complexity
O(1)

(D = Number of Digits)

## Code
See: `Palindrome_Number_Check.cpp`

---

# 7. Armstrong Number Check

## Problem Statement
Check whether a number is an Armstrong Number.

## Algorithm
1. Count digits.
2. Raise each digit to power = digit count.
3. Add all powers.
4. If sum equals original number → Armstrong Number.

## Dry Run

Input:
153

Execution:
1³ + 5³ + 3³
= 1 + 125 + 27
= 153

Output:
Armstrong Number

## Time Complexity
O(D²)

## Space Complexity
O(1)

(D = Number of Digits)

## Code
See: `Armstrong_Number_Check.cpp`

---

# 8. Strong Number Check

## Problem Statement
Check whether a number is a Strong Number.

## Algorithm
1. Find factorial of each digit.
2. Add all factorials.
3. If sum equals original number → Strong Number.

## Dry Run

Input:
145

Execution:
1! + 4! + 5!
= 1 + 24 + 120
= 145

Output:
Strong Number

## Time Complexity
O(D)

## Space Complexity
O(1)

## Code
See: `Strong_Number_Check.cpp`

---

# 9. Perfect Number Check

## Problem Statement
Check whether a number equals the sum of its proper divisors.

## Algorithm
1. Find all divisors except the number itself.
2. Add them.
3. If sum equals original number → Perfect Number.

## Dry Run

Input:
28

Execution:
1 + 2 + 4 + 7 + 14
= 28

Output:
Perfect Number

## Time Complexity
O(N)

## Space Complexity
O(1)

## Code
See: `Perfect_Number_Check.cpp`

---

# 10. Composite Number Check

## Problem Statement
Check whether a number is composite.

## Algorithm
1. Count the factors of the number.
2. If factor count > 2 → Composite.
3. Else → Not Composite.

## Dry Run

Input:
12

Execution:
Factors = 1, 2, 3, 4, 6, 12
Count = 6

Output:
Composite Number

## Time Complexity
O(N)

## Space Complexity
O(1)

## Code
See: `Composite_Number_Check.cpp`

---

## Summary Table

| Problem | Time Complexity | Space Complexity |
|----------|----------------|------------------|
| Even or Odd | O(1) | O(1) |
| Largest of 3 Numbers | O(1) | O(1) |
| Leap Year Check | O(1) | O(1) |
| Perfect Square Check | O(√N) | O(1) |
| Prime Number Check | O(N) | O(1) |
| Palindrome Number Check | O(D) | O(1) |
| Armstrong Number Check | O(D²) | O(1) |
| Strong Number Check | O(D) | O(1) |
| Perfect Number Check | O(N) | O(1) |
| Composite Number Check | O(N) | O(1) |

> D = Number of Digits in the Number
