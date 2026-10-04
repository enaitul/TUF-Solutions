# [Rotten Oranges](https://takeuforward.org/practice/dsa/rotten-oranges?source=strivers-a2z-dsa-sheet&category=traversal-problems)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given an n x m grid, where each cell has the following values :&nbsp;

2&nbsp;-&nbsp;represents a rotten orange

1&nbsp;-&nbsp;represents a Fresh orange

0&nbsp;-&nbsp;represents an Empty Cell

Every minute, if a fresh orange is adjacent to a rotten orange in **4-direction** ( upward, downwards, right, and left ) it becomes rotten.&nbsp;

Return the **minimum** number of **minutes** required such that none of the cells has a Fresh Orange. If it's not possible, return -1.

### Example 1:

**Input:** grid = [ [2, 1, 1] , [0, 1, 1] , [1, 0, 1] ]

**Output:** -1

**Explanation:** &nbsp;Orange at (3,0) cannot be rotten.

<img src="https://static.takeuforward.org/content/ProblemSetter-NWsocTcc">

### Example 2:

**Input:** grid = [ [2,1,1] , [1,1,0] , [0,1,1] ]&nbsp;

**Output:** &nbsp;4

**Explanation:**

<img src="https://static.takeuforward.org/content/ProblemSetter-yuB56suz">

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- &nbsp;&nbsp;1 <= n, m <= 500
- &nbsp;&nbsp;grid[i][j] == 0 or 1 or 2

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
