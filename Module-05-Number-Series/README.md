# Module 5 - Number Series

This module focuses on generating and identifying special numbers within a given range. These problems strengthen looping, number manipulation, factorization, and mathematical logic skills.

## Problems Covered

1. Perfect Squares from 1 to N
2. Armstrong Numbers from 1 to N
3. Strong Numbers from 1 to N
4. Perfect Numbers from 1 to N
5. Palindrome Numbers from 1 to N
6. Numbers whose Digit Sum equals X

---

# 1. Perfect Squares from 1 to N

## Problem Statement

Print all perfect square numbers from 1 to N.

## Algorithm

1. Read N.
2. Start from i = 1.
3. Check if i² ≤ N.
4. Print i².
5. Increment i.

## Dry Run

Input:
50

Execution:

1² = 1
2² = 4
3² = 9
4² = 16
5² = 25
6² = 36
7² = 49

Output:

1 4 9 16 25 36 49

## Time Complexity

O(√N)

## Space Complexity

O(1)

## Code

See: Perfect_Squares_1_to_N.cpp

---

# 2. Armstrong Numbers from 1 to N

## Problem Statement

Print all Armstrong Numbers between 1 and N.

## Algorithm

1. Loop from 1 to N.
2. Count digits.
3. Calculate sum of digits raised to digit count.
4. Compare with original number.
5. Print if equal.

## Dry Run

Input:
500

Output:

1 2 3 4 5 6 7 8 9 153 370 371 407

## Time Complexity

O(N × D²)

## Space Complexity

O(1)

## Code

See: Armstrong_1_to_N.cpp

---

# 3. Strong Numbers from 1 to N

## Problem Statement

Print all Strong Numbers between 1 and N.

## Algorithm

1. Loop from 1 to N.
2. Calculate factorial of every digit.
3. Sum factorials.
4. Compare with original number.
5. Print if equal.

## Dry Run

Input:
500

Output:

1 2 145

## Time Complexity

O(N × D)

## Space Complexity

O(1)

## Code

See: Strong_1_to_N.cpp

---

# 4. Perfect Numbers from 1 to N

## Problem Statement

Print all Perfect Numbers between 1 and N.

## Algorithm

1. Loop from 1 to N.
2. Find proper divisors.
3. Add divisors.
4. If sum equals original number, print it.

## Dry Run

Input:
1000

Output:

6 28 496

## Time Complexity

O(N²)

## Space Complexity

O(1)

## Code

See: Perfect_Numbers_1_to_N.cpp

---

# 5. Palindrome Numbers from 1 to N

## Problem Statement

Print all palindrome numbers between 1 and N.

## Algorithm

1. Loop from 1 to N.
2. Reverse each number.
3. Compare with original number.
4. Print if equal.

## Dry Run

Input:
150

Output:

1 2 3 4 5 6 7 8 9 11 22 33 44 55 66 77 88 99 101 111 121 131 141

## Time Complexity

O(N × D)

## Space Complexity

O(1)

## Code

See: Palindrome_1_to_N.cpp

---

# 6. Numbers whose Digit Sum equals X

## Problem Statement

Print all numbers between 1 and N whose digit sum equals X.

## Algorithm

1. Read N and X.
2. Loop from 1 to N.
3. Find digit sum of each number.
4. If digit sum equals X, print the number.

## Dry Run

Input:

N = 50
X = 5

Execution:

5 → 5
14 → 1+4 = 5
23 → 2+3 = 5
32 → 3+2 = 5
41 → 4+1 = 5
50 → 5+0 = 5

Output:

5 14 23 32 41 50

## Time Complexity

O(N × D)

## Space Complexity

O(1)

## Code

See: Digit_Sum_Equals_X.cpp

---

# Summary Table

| Problem | Time Complexity | Space Complexity |
|----------|----------------|------------------|
| Perfect Squares 1 to N | O(√N) | O(1) |
| Armstrong Numbers 1 to N | O(N × D²) | O(1) |
| Strong Numbers 1 to N | O(N × D) | O(1) |
| Perfect Numbers 1 to N | O(N²) | O(1) |
| Palindrome Numbers 1 to N | O(N × D) | O(1) |
| Digit Sum Equals X | O(N × D) | O(1) |

> D = Number of Digits
