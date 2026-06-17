# Module 8 - Intermediate Patterns

This module covers intermediate-level pattern problems using nested loops. These patterns improve logical thinking, visualization skills, and mastery of loop control.

## Problems Covered

1. Pyramid Pattern
2. Inverted Pyramid Pattern
3. Hollow Square Pattern
4. Hollow Rectangle Pattern
5. Hollow Triangle Pattern
6. Diamond Pattern
7. Floyd's Triangle
8. Pascal's Triangle

---

# 1. Pyramid Pattern

## Problem Statement

Print a centered pyramid of stars.

## Algorithm

1. Read N.
2. Print spaces before stars.
3. Print stars in odd counts.
4. Repeat for N rows.

## Dry Run

Input:
5

Output:

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

## Time Complexity

O(N²)

## Space Complexity

O(1)

## Code

See: Pyramid_Pattern.cpp

---

# 2. Inverted Pyramid Pattern

## Problem Statement

Print an inverted pyramid of stars.

## Algorithm

1. Read N.
2. Print decreasing stars.
3. Increase leading spaces each row.

## Dry Run

Input:
5

Output:

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

## Time Complexity

O(N²)

## Space Complexity

O(1)

## Code

See: Inverted_Pyramid.cpp

---

# 3. Hollow Square Pattern

## Problem Statement

Print a hollow square pattern.

## Algorithm

1. Print stars on boundaries.
2. Print spaces inside.

## Dry Run

Input:
5

Output:

* * * * *
*       *
*       *
*       *
* * * * *

## Time Complexity

O(N²)

## Space Complexity

O(1)

## Code

See: Hollow_Square.cpp

---

# 4. Hollow Rectangle Pattern

## Problem Statement

Print a hollow rectangle.

## Algorithm

1. Print stars on first and last row.
2. Print stars on first and last column.
3. Print spaces elsewhere.

## Dry Run

Input:

Rows = 4
Cols = 6

Output:

* * * * * *
*         *
*         *
* * * * * *

## Time Complexity

O(R × C)

## Space Complexity

O(1)

## Code

See: Hollow_Rectangle.cpp

---

# 5. Hollow Triangle Pattern

## Problem Statement

Print a hollow right triangle.

## Dry Run

Input:
5

Output:

*
* *
*   *
*     *
* * * * *

## Time Complexity

O(N²)

## Space Complexity

O(1)

## Code

See: Hollow_Triangle.cpp

---

# 6. Diamond Pattern

## Problem Statement

Print a diamond using stars.

## Algorithm

1. Print upper pyramid.
2. Print lower inverted pyramid.

## Dry Run

Input:
5

Output:

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

## Time Complexity

O(N²)

## Space Complexity

O(1)

## Code

See: Diamond_Pattern.cpp

---

# 7. Floyd's Triangle

## Problem Statement

Print Floyd's Triangle.

## Algorithm

1. Maintain a counter variable.
2. Print increasing numbers row-wise.

## Dry Run

Input:
5

Output:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

## Time Complexity

O(N²)

## Space Complexity

O(1)

## Code

See: Floyds_Triangle.cpp

---

# 8. Pascal's Triangle

## Problem Statement

Print Pascal's Triangle.

## Algorithm

1. Use nCr formula.
2. Print row-wise coefficients.

## Dry Run

Input:
5

Output:

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

## Time Complexity

O(N²)

## Space Complexity

O(1)

## Code

See: Pascals_Triangle.cpp

---

# Summary Table

| Problem | Time Complexity | Space Complexity |
|----------|----------------|------------------|
| Pyramid Pattern | O(N²) | O(1) |
| Inverted Pyramid | O(N²) | O(1) |
| Hollow Square | O(N²) | O(1) |
| Hollow Rectangle | O(R×C) | O(1) |
| Hollow Triangle | O(N²) | O(1) |
| Diamond Pattern | O(N²) | O(1) |
| Floyd's Triangle | O(N²) | O(1) |
| Pascal's Triangle | O(N²) | O(1) |

> N = Number of Rows
