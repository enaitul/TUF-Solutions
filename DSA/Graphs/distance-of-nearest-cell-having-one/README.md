# [Distance of nearest cell having one](https://takeuforward.org/practice/dsa/distance-of-nearest-cell-having-one?category=traversal-problems&source=strivers-a2z-dsa-sheet)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given a binary grid of N x M. Find the **distance** of the nearest 1 in the grid for each cell.

The distance is calculated as **|i1&nbsp;- i2| + |j1 - j2|** , where i1, j1 are the row number and column number of the current cell, and i2, j2 are the row number and column number of the nearest cell having value 1.

### Example 1:

<img src="https://static.takeuforward.org/content/ProblemSetter-RW6Xyxa0">

**Input:** grid = [ [0, 1, 1, 0], [1, 1, 0, 0], [0, 0, 1, 1] ]

**Output:** [ [1, 0, 0, 1], [0, 0, 1, 1], [1, 1, 0, 0] ]

**Explanation:** 0's at (0,0), (0,3), (1,2), (1,3), (2,0) and (2,1) are at a distance of 1 from 1's at (0,1),(0,2), (0,2), (2,3), (1,0) and (1,1) respectively.

<img src="https://static.takeuforward.org/content/ProblemSetter-b0o2o0hT">

### Example 2:

**Input:** grid = [ [1, 0, 1], [1, 1, 0], [1, 0, 0] ]

**Output:** [ [0, 1, 0], [0, 0, 1], [0, 1, 2] ]

**Explanation:** 0's at (0,1), (1,2), (2,1) and (2,2) are at a&nbsp;distance of 1, 1, 1 and 2 from 1's at (0,0),(0,2), (2,0) and (1,1) respectively.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- &nbsp;&nbsp;1 <= N, M <= 500
- &nbsp;&nbsp;grid[i][j] == 0 or 1
- There is atleast one 1 in the grid

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
