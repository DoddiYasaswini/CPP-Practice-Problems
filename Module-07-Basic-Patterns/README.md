# Module 7 - Basic Patterns

This module introduces pattern printing using nested loops. Pattern problems help improve logical thinking, loop control, and visualization skills.

## Problems Covered

1. Square Star Pattern
2. Rectangle Star Pattern
3. Right Triangle Star Pattern
4. Inverted Right Triangle Star Pattern
5. Number Triangle Pattern
6. Repeated Number Triangle Pattern
7. Alphabet Triangle Pattern

---

# 1. Square Star Pattern

## Problem Statement

Print a square pattern of stars of size N.

## Algorithm

1. Read N.
2. Use two nested loops.
3. Print "*" N times in each row.
4. Repeat for N rows.

## Dry Run

Input:
4

Output:

* * * *
* * * *
* * * *
* * * *

## Time Complexity

O(N²)

## Space Complexity

O(1)

## Code

See: Square_Star_Pattern.cpp

---

# 2. Rectangle Star Pattern

## Problem Statement

Print a rectangle of stars with R rows and C columns.

## Algorithm

1. Read rows and columns.
2. Use nested loops.
3. Print stars in each row.

## Dry Run

Input:

Rows = 3
Cols = 5

Output:

* * * * *
* * * * *
* * * * *

## Time Complexity

O(R × C)

## Space Complexity

O(1)

## Code

See: Rectangle_Star_Pattern.cpp

---

# 3. Right Triangle Star Pattern

## Problem Statement

Print a right-angled triangle using stars.

## Algorithm

1. Read N.
2. Row i contains i stars.
3. Repeat for all rows.

## Dry Run

Input:
5

Output:

*
* *
* * *
* * * *
* * * * *

## Time Complexity

O(N²)

## Space Complexity

O(1)

## Code

See: Right_Triangle_Star.cpp

---

# 4. Inverted Right Triangle Star Pattern

## Problem Statement

Print an inverted right triangle using stars.

## Algorithm

1. Read N.
2. First row contains N stars.
3. Decrease stars by one in every row.

## Dry Run

Input:
5

Output:

* * * * *
* * * *
* * *
* *
*

## Time Complexity

O(N²)

## Space Complexity

O(1)

## Code

See: Inverted_Right_Triangle.cpp

---

# 5. Number Triangle Pattern

## Problem Statement

Print increasing numbers in triangular form.

## Algorithm

1. Read N.
2. Row i contains numbers from 1 to i.

## Dry Run

Input:
5

Output:

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

## Time Complexity

O(N²)

## Space Complexity

O(1)

## Code

See: Number_Triangle.cpp

---

# 6. Repeated Number Triangle Pattern

## Problem Statement

Print repeated row numbers in triangular form.

## Algorithm

1. Read N.
2. Row i contains i repeated i times.

## Dry Run

Input:
5

Output:

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

## Time Complexity

O(N²)

## Space Complexity

O(1)

## Code

See: Repeated_Number_Triangle.cpp

---

# 7. Alphabet Triangle Pattern

## Problem Statement

Print alphabets in triangular form.

## Algorithm

1. Read N.
2. Row 1 → A
3. Row 2 → A B
4. Continue similarly.

## Dry Run

Input:
5

Output:

A
A B
A B C
A B C D
A B C D E

## Time Complexity

O(N²)

## Space Complexity

O(1)

## Code

See: Alphabet_Triangle.cpp

---

# Summary Table

| Problem | Time Complexity | Space Complexity |
|----------|----------------|------------------|
| Square Star Pattern | O(N²) | O(1) |
| Rectangle Star Pattern | O(R × C) | O(1) |
| Right Triangle Star Pattern | O(N²) | O(1) |
| Inverted Right Triangle | O(N²) | O(1) |
| Number Triangle | O(N²) | O(1) |
| Repeated Number Triangle | O(N²) | O(1) |
| Alphabet Triangle | O(N²) | O(1) |

> N = Number of Rows
