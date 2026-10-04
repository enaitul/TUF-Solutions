# [Surrounded Regions](https://takeuforward.org/practice/dsa/surrounded-regions?category=traversal-problems&source=strivers-a2z-dsa-sheet)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

You are given a matrix mat of size **N x M** where each cell contains either **'O'** or **'X'** .

Your task is to replace all **'O'** cells that are completely surrounded by **'X'** with **'X'** .

**Rules:**

- An **'O'** (or a group of connected **'O'** s) is considered surrounded if it is not connected to any border of the matrix.
- Two **'O'** cells are considered connected if they are adjacent horizontally or vertically **(not diagonally)** .
- A region of connected **'O'** s that touches the border (i.e., first row, last row, first column, or last column) is not surrounded and should not be changed.

### Example 1:

<img src="https://static.takeuforward.org/content/ProblemSetter-sA3BL8cs">

**Input:** mat = [ ["X", "X", "X", "X"], ["X", "O", "O", "X"], ["X", "X", "O", "X"], ["X", "O", "X", "X"] ]

**Output:** [ ["X", "X", "X", "X"], ["X", "X", "X", "X"], ["X", "X", "X", "X"], ["X", "O", "X", "X"] ]

**Explanation:**

<img src="https://static.takeuforward.org/content/ProblemSetter-jd2Z8EHv">

The 'O' cells at positions (1,1), (1,2), (2,2), and (3,1) are surrounded by 'X' cells in all directions (horizontally and vertically).

However, the 'O' region at (3,1) is adjacent to an edge of the board, so it cannot be completely surrounded by 'X' cells. Therefore, it remains unchanged.

### Example 2:

**Input:** mat = [ ["X", "X", "X"], ["X", "O", "X"], ["X", "X", "X"] ]

**Output:** [ ["X", "X", "X"], ["X", "X", "X"], ["X", "X", "X"] ]

**Explanation:** The only 'O' cell at position (1,1) is completely surrounded by 'X' cells in all directions (horizontally and vertically). Hence, it is replaced with 'X' in the output.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- &nbsp;&nbsp;N == mat.length
- &nbsp;&nbsp;M == mat[i].length
- &nbsp;&nbsp;1 <= N, M <= 300
- &nbsp;&nbsp;mat[i][j] is 'X' or 'O'.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
