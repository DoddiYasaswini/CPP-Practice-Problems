# Module 4 - Prime and Divisor Logic

This module focuses on factors, divisors, prime numbers, GCD, and LCM. These concepts form the foundation of Number Theory and are frequently asked in coding interviews and competitive programming.

## Problems Covered

1. Find Factors of a Number
2. Count Factors of a Number
3. Print Divisors of a Number
4. Prime Numbers from 1 to N
5. Prime Numbers from N to 1
6. GCD (HCF) of Two Numbers
7. LCM of Two Numbers

---

# 1. Find Factors of a Number

## Problem Statement

Print all factors of a given number.

## Algorithm

1. Read N.
2. Traverse from 1 to N.
3. If N % i == 0, print i.

## Dry Run

Input:
12

Execution:

12 % 1 = 0 → 1
12 % 2 = 0 → 2
12 % 3 = 0 → 3
12 % 4 = 0 → 4
12 % 5 ≠ 0
12 % 6 = 0 → 6
12 % 12 = 0 → 12

Output:

1 2 3 4 6 12

## Time Complexity

O(N)

## Space Complexity

O(1)

## Code

See: `Find_Factors.cpp`

---

# 2. Count Factors of a Number

## Problem Statement

Count the total number of factors of a given number.

## Algorithm

1. Read N.
2. Traverse from 1 to N.
3. If N % i == 0, increment count.
4. Print count.

## Dry Run

Input:
12

Execution:

Factors = 1 2 3 4 6 12

Count = 6

Output:

6

## Time Complexity

O(N)

## Space Complexity

O(1)

## Code

See: `Count_Factors.cpp`

---

# 3. Print Divisors of a Number

## Problem Statement

Print all divisors of a given number.

## Algorithm

1. Traverse from 1 to N.
2. Check N % i == 0.
3. Print i.

## Dry Run

Input:
18

Execution:

18 % 1 = 0
18 % 2 = 0
18 % 3 = 0
18 % 6 = 0
18 % 9 = 0
18 % 18 = 0

Output:

1 2 3 6 9 18

## Time Complexity

O(N)

## Space Complexity

O(1)

## Code

See: `Print_Divisors.cpp`

---

# 4. Prime Numbers from 1 to N

## Problem Statement

Print all prime numbers between 1 and N.

## Algorithm

1. Traverse each number from 2 to N.
2. Check factor count.
3. If factor count is 2, print number.

## Dry Run

Input:
10

Execution:

2 → Prime
3 → Prime
4 → Not Prime
5 → Prime
6 → Not Prime
7 → Prime
8 → Not Prime
9 → Not Prime
10 → Not Prime

Output:

2 3 5 7

## Time Complexity

O(N²)

## Space Complexity

O(1)

## Code

See: `Prime_1_to_N.cpp`

---

# 5. Prime Numbers from N to 1

## Problem Statement

Print all prime numbers from N down to 1.

## Algorithm

1. Traverse from N to 2.
2. Check factor count.
3. If factor count is 2, print number.

## Dry Run

Input:
10

Execution:

10 → Not Prime
9 → Not Prime
8 → Not Prime
7 → Prime
6 → Not Prime
5 → Prime
4 → Not Prime
3 → Prime
2 → Prime

Output:

7 5 3 2

## Time Complexity

O(N²)

## Space Complexity

O(1)

## Code

See: `Prime_N_to_1.cpp`

---

# 6. GCD (HCF) of Two Numbers

## Problem Statement

Find the Greatest Common Divisor (Highest Common Factor) of two numbers.

## Algorithm

1. Read a and b.
2. Traverse from 1 to minimum(a,b).
3. If both are divisible by i, store i.
4. Print last stored value.

## Dry Run

Input:

12 18

Execution:

Common Factors:
1, 2, 3, 6

Largest = 6

Output:

6

## Time Complexity

O(min(a,b))

## Space Complexity

O(1)

## Code

See: `GCD_HCF.cpp`

---

# 7. LCM of Two Numbers

## Problem Statement

Find the Least Common Multiple of two numbers.

## Algorithm

1. Start from max(a,b).
2. Increment until number becomes divisible by both.
3. Print the number.

## Dry Run

Input:

12 18

Execution:

18 ❌
19 ❌
20 ❌
...
36 ✔

Output:

36

## Time Complexity

O(LCM)

## Space Complexity

O(1)

## Code

See: `LCM.cpp`

---

# Summary Table

| Problem | Time Complexity | Space Complexity |
|----------|----------------|------------------|
| Find Factors | O(N) | O(1) |
| Count Factors | O(N) | O(1) |
| Print Divisors | O(N) | O(1) |
| Prime Numbers 1 to N | O(N²) | O(1) |
| Prime Numbers N to 1 | O(N²) | O(1) |
| GCD (HCF) | O(min(a,b)) | O(1) |
| LCM | O(LCM) | O(1) |

> GCD = Greatest Common Divisor  
> HCF = Highest Common Factor  
> LCM = Least Common Multiple
