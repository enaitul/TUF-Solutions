# [Frog jump with K distances](https://takeuforward.org/plus/dsa/problems/frog-jump-with-k-distances?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

A frog wants to climb a staircase with n steps. Given an integer array heights, where heights[i] contains the height of the i^th step, and an integer k.

To jump from the i^th step to the j^th step, the frog requires **abs(heights[i] - heights[j])** energy, where abs() denotes the absolute difference. The frog can jump from the i^th step to any step in the range [i + 1, i + k], provided it exists.

Return the **minimum** amount of energy required by the frog to go from the 0^th step to the (n-1)^th step.

### Example 1

<p>

**Input:** heights = [10, 5, 20, 0, 15], k = 2</p><p>

**Output:** 15</p><p>

**Explanation:** </p>0th step -> 2nd step, cost = abs(10 - 20) = 10

2nd step -> 4th step, cost = abs(20 - 15) = 5

Total cost = 10 + 5 = 15.

### Example 2

<p>

**Input:** heights = [15, 4, 1, 14, 15], k = 3</p><p>

**Output:** 2</p><p>

**Explanation:** </p>0th step -> 3rd step, cost = abs(15 - 14) = 1

3rd step -> 4th step, cost = abs(14 - 15) = 1

Total cost = 1 + 1 = 2.

### Constraints

- 1 <= n <= 10^4
- 1 <= k <= 10
- 0 <= heights[i] <= 10^4

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
