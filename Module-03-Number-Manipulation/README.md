# Module 3 - Number Manipulation

This module focuses on extracting, analyzing, and manipulating digits of a number using loops and arithmetic operators.

## Problems Covered

1. Count Digits in a Number
2. Sum of Digits of a Number
3. Reverse a Number
4. Largest Digit in a Number
5. Smallest Digit in a Number
6. Count Even and Odd Digits in a Number

---

# 1. Count Digits in a Number

## Problem Statement

Count the number of digits present in a given number.

## Algorithm

1. Read the number.
2. Initialize count = 0.
3. Repeatedly divide the number by 10.
4. Increment count each time.
5. Print count.

## Dry Run

Input:
12345

Execution:

12345 → 1234
1234 → 123
123 → 12
12 → 1
1 → 0

Count = 5

Output:

5

## Time Complexity

O(D)

## Space Complexity

O(1)

## Code

See: `Count_Digits.cpp`

---

# 2. Sum of Digits of a Number

## Problem Statement

Find the sum of all digits of a given number.

## Algorithm

1. Extract each digit using % 10.
2. Add digit to sum.
3. Remove last digit using / 10.
4. Repeat until number becomes 0.

## Dry Run

Input:
1234

Execution:

1 + 2 + 3 + 4

= 10

Output:

10

## Time Complexity

O(D)

## Space Complexity

O(1)

## Code

See: `Sum_of_Digits.cpp`

---

# 3. Reverse a Number

## Problem Statement

Reverse the digits of a number.

## Algorithm

1. Extract last digit.
2. Add digit to reversed number.
3. Remove last digit.
4. Repeat until number becomes 0.

## Dry Run

Input:
1234

Execution:

rev = 0

4 → rev = 4
3 → rev = 43
2 → rev = 432
1 → rev = 4321

Output:

4321

## Time Complexity

O(D)

## Space Complexity

O(1)

## Code

See: `Reverse_Number.cpp`

---

# 4. Largest Digit in a Number

## Problem Statement

Find the largest digit present in a number.

## Algorithm

1. Extract digits one by one.
2. Compare with largest digit.
3. Update largest when needed.
4. Print result.

## Dry Run

Input:
53827

Execution:

largest = 0

7 > 0 → 7
2 < 7
8 > 7 → 8
3 < 8
5 < 8

Output:

8

## Time Complexity

O(D)

## Space Complexity

O(1)

## Code

See: `Largest_Digit.cpp`

---

# 5. Smallest Digit in a Number

## Problem Statement

Find the smallest digit present in a number.

## Algorithm

1. Extract digits one by one.
2. Compare with smallest digit.
3. Update smallest when needed.
4. Print result.

## Dry Run

Input:
53827

Execution:

smallest = 9

7 < 9 → 7
2 < 7 → 2
8 > 2
3 > 2
5 > 2

Output:

2

## Time Complexity

O(D)

## Space Complexity

O(1)

## Code

See: `Smallest_Digit.cpp`

---

# 6. Count Even and Odd Digits

## Problem Statement

Count how many even and odd digits exist in a number.

## Algorithm

1. Extract digits one by one.
2. Check digit % 2.
3. Increment even count or odd count.
4. Print both counts.

## Dry Run

Input:
123456

Execution:

1 → Odd
2 → Even
3 → Odd
4 → Even
5 → Odd
6 → Even

Even Count = 3
Odd Count = 3

Output:

Even digits = 3
Odd digits = 3

## Time Complexity

O(D)

## Space Complexity

O(1)

## Code

See: `Count_Even_Odd_Digits.cpp`

---

# Summary Table

| Problem | Time Complexity | Space Complexity |
|----------|----------------|------------------|
| Count Digits | O(D) | O(1) |
| Sum of Digits | O(D) | O(1) |
| Reverse Number | O(D) | O(1) |
| Largest Digit | O(D) | O(1) |
| Smallest Digit | O(D) | O(1) |
| Count Even/Odd Digits | O(D) | O(1) |

> D = Number of Digits
