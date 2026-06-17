# Module 9 - Logic Building

This module focuses on developing problem-solving skills using loops, conditions, arrays, and basic searching techniques. These problems are commonly asked in coding rounds and interviews.

## Problems Covered

1. Largest Among N Numbers
2. Smallest Among N Numbers
3. Second Largest Number
4. Frequency of Digits
5. Unique Digits Check
6. Missing Number in Array
7. Duplicate Number in Array
8. Linear Search
9. Menu Driven Calculator

---

# 1. Largest Among N Numbers

## Problem Statement

Find the largest element among N numbers.

## Algorithm

1. Read N numbers.
2. Assume first element is largest.
3. Compare remaining elements.
4. Update largest whenever needed.

## Dry Run

Input:

5

10 25 8 40 15

Output:

40

## Time Complexity

O(N)

## Space Complexity

O(1)

## Code

See: Largest_Among_N.cpp

---

# 2. Smallest Among N Numbers

## Problem Statement

Find the smallest element among N numbers.

## Algorithm

1. Read N numbers.
2. Assume first element is smallest.
3. Compare remaining elements.
4. Update smallest whenever needed.

## Dry Run

Input:

5

10 25 8 40 15

Output:

8

## Time Complexity

O(N)

## Space Complexity

O(1)

## Code

See: Smallest_Among_N.cpp

---

# 3. Second Largest Number

## Problem Statement

Find the second largest element in an array.

## Algorithm

1. Maintain largest and secondLargest.
2. Traverse array.
3. Update values accordingly.

## Dry Run

Input:

5

10 25 8 40 15

Execution:

Largest = 40

Second Largest = 25

Output:

25

## Time Complexity

O(N)

## Space Complexity

O(1)

## Code

See: Second_Largest.cpp

---

# 4. Frequency of Digits

## Problem Statement

Count frequency of each digit in a number.

## Algorithm

1. Extract digits using %10.
2. Maintain count array.
3. Print frequencies.

## Dry Run

Input:

122333

Output:

1 → 1

2 → 2

3 → 3

## Time Complexity

O(D)

## Space Complexity

O(1)

## Code

See: Frequency_Of_Digits.cpp

---

# 5. Unique Digits Check

## Problem Statement

Check whether all digits in a number are unique.

## Algorithm

1. Maintain digit frequency array.
2. Extract digits.
3. If any digit repeats, print Not Unique.

## Dry Run

Input:

12345

Output:

Unique Digits

Input:

11234

Output:

Not Unique

## Time Complexity

O(D)

## Space Complexity

O(1)

## Code

See: Unique_Digits_Check.cpp

---

# 6. Missing Number in Array

## Problem Statement

Find the missing number from 1 to N.

## Algorithm

1. Calculate expected sum.
2. Calculate actual sum.
3. Difference gives missing number.

## Dry Run

Input:

1 2 3 5

Expected Sum = 15

Actual Sum = 11

Output:

4

## Time Complexity

O(N)

## Space Complexity

O(1)

## Code

See: Missing_Number.cpp

---

# 7. Duplicate Number in Array

## Problem Statement

Find duplicate element in an array.

## Algorithm

1. Compare every element with remaining elements.
2. Print duplicate when found.

## Dry Run

Input:

1 3 4 2 2

Output:

2

## Time Complexity

O(N²)

## Space Complexity

O(1)

## Code

See: Duplicate_Number.cpp

---

# 8. Linear Search

## Problem Statement

Search for a target element in an array.

## Algorithm

1. Traverse array.
2. Compare each element with target.
3. Print position if found.

## Dry Run

Input:

10 20 30 40 50

Target = 40

Output:

Found at Index 3

## Time Complexity

O(N)

## Space Complexity

O(1)

## Code

See: Linear_Search.cpp

---

# 9. Menu Driven Calculator

## Problem Statement

Perform arithmetic operations using menu options.

## Operations

1. Addition
2. Subtraction
3. Multiplication
4. Division

## Dry Run

Input:

Choice = 1

10 20

Output:

30

## Time Complexity

O(1)

## Space Complexity

O(1)

## Code

See: Menu_Driven_Calculator.cpp

---

# Summary Table

| Problem | Time Complexity | Space Complexity |
|----------|----------------|------------------|
| Largest Among N Numbers | O(N) | O(1) |
| Smallest Among N Numbers | O(N) | O(1) |
| Second Largest Number | O(N) | O(1) |
| Frequency of Digits | O(D) | O(1) |
| Unique Digits Check | O(D) | O(1) |
| Missing Number | O(N) | O(1) |
| Duplicate Number | O(N²) | O(1) |
| Linear Search | O(N) | O(1) |
| Menu Driven Calculator | O(1) | O(1) |

> N = Number of Elements  
> D = Number of Digits
