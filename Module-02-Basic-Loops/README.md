# Module 2 - Basic Loops

This module covers fundamental looping concepts using `for` and `while` loops. These problems help build a strong foundation in iteration, mathematical computations, and sequence generation.

## Problems Covered

1. Multiplication Table
2. Sum of First N Numbers
3. Sum of First N Even Numbers
4. Sum of First N Odd Numbers
5. Power of a Number (a^b)
6. Fibonacci Series (N Terms)
7. Fibonacci Series (Till Limit N)

---

# 1. Multiplication Table

## Problem Statement

Print the multiplication table of a given number up to 10 terms.

## Algorithm

1. Read the number.
2. Loop from 1 to 10.
3. Multiply the number by loop variable.
4. Print the result.

## Dry Run

Input:
5

Execution:

5 × 1 = 5
5 × 2 = 10
5 × 3 = 15
...
5 × 10 = 50

Output:

5 10 15 20 25 30 35 40 45 50

## Time Complexity

O(1)

## Space Complexity

O(1)

## Code

See: `Multiplication_Table.cpp`

---

# 2. Sum of First N Numbers

## Problem Statement

Find the sum of first N natural numbers.

## Algorithm

1. Read N.
2. Initialize sum = 0.
3. Loop from 1 to N.
4. Add each number to sum.
5. Print sum.

## Dry Run

Input:
5

Execution:

sum = 0

sum = 0 + 1 = 1
sum = 1 + 2 = 3
sum = 3 + 3 = 6
sum = 6 + 4 = 10
sum = 10 + 5 = 15

Output:

15

## Time Complexity

O(N)

## Space Complexity

O(1)

## Code

See: `Sum_of_First_N_Numbers.cpp`

---

# 3. Sum of First N Even Numbers

## Problem Statement

Find the sum of first N even numbers.

## Algorithm

1. Read N.
2. Initialize sum = 0.
3. Loop from 1 to N.
4. Add (2 × i) to sum.
5. Print sum.

## Dry Run

Input:
5

Execution:

2 + 4 + 6 + 8 + 10

= 30

Output:

30

## Time Complexity

O(N)

## Space Complexity

O(1)

## Code

See: `Sum_of_First_N_Even_Numbers.cpp`

---

# 4. Sum of First N Odd Numbers

## Problem Statement

Find the sum of first N odd numbers.

## Algorithm

1. Read N.
2. Initialize sum = 0.
3. Loop from 1 to N.
4. Add (2 × i - 1).
5. Print sum.

## Dry Run

Input:
5

Execution:

1 + 3 + 5 + 7 + 9

= 25

Output:

25

## Time Complexity

O(N)

## Space Complexity

O(1)

## Code

See: `Sum_of_First_N_Odd_Numbers.cpp`

---

# 5. Power of a Number (a^b)

## Problem Statement

Calculate a raised to the power b.

## Algorithm

1. Read a and b.
2. Initialize power = 1.
3. Multiply power by a, b times.
4. Print power.

## Dry Run

Input:

2 5

Execution:

power = 1

power = 1 × 2 = 2
power = 2 × 2 = 4
power = 4 × 2 = 8
power = 8 × 2 = 16
power = 16 × 2 = 32

Output:

32

## Time Complexity

O(B)

## Space Complexity

O(1)

## Code

See: `Power_of_Number.cpp`

---

# 6. Fibonacci Series (N Terms)

## Problem Statement

Print first N terms of the Fibonacci sequence.

## Algorithm

1. Initialize a = 0, b = 1.
2. Print a.
3. Generate next term as a + b.
4. Update values.
5. Repeat N times.

## Dry Run

Input:

7

Execution:

0
1
1
2
3
5
8

Output:

0 1 1 2 3 5 8

## Time Complexity

O(N)

## Space Complexity

O(1)

## Code

See: `Fibonacci_N_Terms.cpp`

---

# 7. Fibonacci Series (Till Limit N)

## Problem Statement

Print Fibonacci numbers up to a given limit N.

## Algorithm

1. Initialize a = 0, b = 1.
2. Print numbers while a ≤ N.
3. Generate next Fibonacci number.
4. Update variables.
5. Continue until limit exceeded.

## Dry Run

Input:

20

Execution:

0
1
1
2
3
5
8
13

Next = 21 > 20

Output:

0 1 1 2 3 5 8 13

## Time Complexity

O(N)

## Space Complexity

O(1)

## Code

See: `Fibonacci_Till_Limit.cpp`

---

# Summary Table

| Problem | Time Complexity | Space Complexity |
|----------|----------------|------------------|
| Multiplication Table | O(1) | O(1) |
| Sum of First N Numbers | O(N) | O(1) |
| Sum of First N Even Numbers | O(N) | O(1) |
| Sum of First N Odd Numbers | O(N) | O(1) |
| Power of a Number | O(B) | O(1) |
| Fibonacci Series (N Terms) | O(N) | O(1) |
| Fibonacci Series (Till Limit N) | O(N) | O(1) |

> N = Number of Iterations  
> B = Exponent Value
