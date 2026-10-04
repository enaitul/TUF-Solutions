# [Number of distinct islands](https://takeuforward.org/practice/dsa/number-of-distinct-islands?category=traversal-problems&source=strivers-a2z-dsa-sheet)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

You are given a 2D matrix grid of size N × M, where each cell contains either 0 or 1. Find the **number** of **distinct islands** where a group of connected 1s (horizontally or vertically) forms an island. Two islands are considered to be same if and only if one island is equal to another (not rotated or reflected).

### Example 1:

**Input:** grid = [[1, 1, 0, 0, 0], [1, 1, 0, 0, 0], [0, 0, 0, 1, 1],[0, 0, 0, 1, 1]]

**Output:** 1

**Explanation:**

<img src="https://static.takeuforward.org/content/ProblemSetter-uZ6QFTmg">

Same colored islands are equal. We have 2 equal islands, so we&nbsp;have only 1 distinct island.

### Example 2:

**Input:** grid = [[1, 1, 0, 1, 1], [1, 0, 0, 0, 0], [0, 0, 0, 0, 1],[1, 1, 0, 1, 1]]

**Output:** 3

**Explanation:**

<img src="https://static.takeuforward.org/content/ProblemSetter-Mz_brmnT">

Same colored islands are equal. We have 4 islands, but 2 of them are equal, So we have 3 distinct islands..

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- &nbsp;&nbsp;1 <= N, M <= 500
- &nbsp;&nbsp;grid[i][j] == 0 or 1

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
