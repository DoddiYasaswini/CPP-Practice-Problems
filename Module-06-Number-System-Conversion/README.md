# Module 6 - Number System Conversion

This module covers conversions between different number systems such as Decimal, Binary, Octal, and Hexadecimal. These problems strengthen understanding of positional number systems and repeated division techniques.

## Problems Covered
1. Decimal to Binary
2. Binary to Decimal
3. Decimal to Octal
4. Octal to Decimal
5. Decimal to Hexadecimal
6. Hexadecimal to Decimal

---

# 1. Decimal to Binary

## Problem Statement

Convert a decimal number into its binary equivalent.

## Algorithm

1. Read decimal number N.
2. Repeatedly divide N by 2.
3. Store remainders.
4. Print remainders in reverse order.

## Dry Run

Input:
13

Execution:

13 / 2 = 6 remainder 1

6 / 2 = 3 remainder 0

3 / 2 = 1 remainder 1

1 / 2 = 0 remainder 1

Output:

1101

## Time Complexity

O(log₂N)

## Space Complexity

O(log₂N)

## Code

See: Decimal_To_Binary.cpp

---

# 2. Binary to Decimal

## Problem Statement

Convert a binary number into its decimal equivalent.

## Algorithm

1. Read binary number.
2. Extract digits from right to left.
3. Multiply each digit by powers of 2.
4. Add all values.

## Dry Run

Input:

1101

Execution:

1 × 2⁰ = 1

0 × 2¹ = 0

1 × 2² = 4

1 × 2³ = 8

Sum = 13

Output:

13

## Time Complexity

O(log₂N)

## Space Complexity

O(1)

## Code

See: Binary_To_Decimal.cpp

---

# 3. Decimal to Octal

## Problem Statement

Convert a decimal number into octal.

## Algorithm

1. Divide by 8 repeatedly.
2. Store remainders.
3. Print in reverse order.

## Dry Run

Input:

83

Execution:

83 / 8 = 10 remainder 3

10 / 8 = 1 remainder 2

1 / 8 = 0 remainder 1

Output:

123

## Time Complexity

O(log₈N)

## Space Complexity

O(log₈N)

## Code

See: Decimal_To_Octal.cpp

---

# 4. Octal to Decimal

## Problem Statement

Convert an octal number into decimal.

## Algorithm

1. Extract digits from right.
2. Multiply by powers of 8.
3. Add all values.

## Dry Run

Input:

123

Execution:

3 × 8⁰ = 3

2 × 8¹ = 16

1 × 8² = 64

Total = 83

Output:

83

## Time Complexity

O(log₈N)

## Space Complexity

O(1)

## Code

See: Octal_To_Decimal.cpp

---

# 5. Decimal to Hexadecimal

## Problem Statement

Convert a decimal number into hexadecimal.

## Algorithm

1. Divide number by 16.
2. Store remainder.
3. Convert 10–15 into A–F.
4. Print in reverse order.

## Dry Run

Input:

255

Execution:

255 / 16 = 15 remainder 15

15 / 16 = 0 remainder 15

15 → F

15 → F

Output:

FF

## Time Complexity

O(log₁₆N)

## Space Complexity

O(log₁₆N)

## Code

See: Decimal_To_Hexadecimal.cpp

---

# 6. Hexadecimal to Decimal

## Problem Statement

Convert a hexadecimal number into decimal.

## Algorithm

1. Read hexadecimal string.
2. Convert A-F into 10-15.
3. Multiply by powers of 16.
4. Add all values.

## Dry Run

Input:

FF

Execution:

F = 15

F = 15

15 × 16¹ = 240

15 × 16⁰ = 15

Total = 255

Output:

255

## Time Complexity

O(N)

## Space Complexity

O(1)

## Code

See: Hexadecimal_To_Decimal.cpp

---

# Summary Table

| Problem | Time Complexity | Space Complexity |
|----------|----------------|------------------|
| Decimal to Binary | O(log₂N) | O(log₂N) |
| Binary to Decimal | O(log₂N) | O(1) |
| Decimal to Octal | O(log₈N) | O(log₈N) |
| Octal to Decimal | O(log₈N) | O(1) |
| Decimal to Hexadecimal | O(log₁₆N) | O(log₁₆N) |
| Hexadecimal to Decimal | O(N) | O(1) |

> N = Number of Digits / Length of Representation
