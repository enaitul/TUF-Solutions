# [Ninja and his Friends](https://takeuforward.org/plus/dsa/problems/ninja-and-his-friends?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Ninja has a grid of size R x C, where each cell contains some chocolates. He has two friends: Alice and Bob, and wants to collect as many chocolates as possible using their help.

- Alice starts at the top-left cell (0, 0)
- Bob starts at the top-right cell (0, C - 1)
- Both can only move to the next row, and from position (i, j), they can move to:
- (i + 1, j)
- (i + 1, j - 1)
- (i + 1, j + 1)

- Both must remain within the grid bounds.
- Each collects all chocolates in their current cell.
- If both land on the same cell, the chocolates are only counted once.

Return the maximum number of chocolates Ninja can collect using his two friends.

### Example 1

<p>

**Input:** grid = [[2, 3, 1, 2],[3, 4, 2, 2],[5, 6, 3, 5]]</p><p>

**Output:** 21</p><p>

**Explanation:** </p>
- Alice: (0,0) → (1,1) → (2,1) → chocolates = 2 + 4 + 6 = 12
- Bob:&nbsp;&nbsp;(0,3) → (1,3) → (2,3) → chocolates = 2 + 2 + 5 = 9
- Total = 12 + 9 = 21

### Example 2

<p>

**Input:** grid = [[1, 2],[3, 4]]</p><p>

**Output:** 10</p><p>

**Explanation:** </p>
- Alice: (0,0) → (1,0) → 1 + 3 = 4
- Bob:&nbsp;&nbsp;(0,1) → (1,1) → 2 + 4 = 6
- But both can’t pick at same time (if they land same cell), so:
- Best is (0,0)+(1,0)+(0,1)+(1,1) - overlap = 1+3+2+4 = 10

### Constraints

- 2 <= R, C <= 50 — rows and columns of grid
- 0 <= grid[i][j] <= 100 — chocolates per cell

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
