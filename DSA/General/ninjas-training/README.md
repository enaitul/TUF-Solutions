# [Ninja's training](https://takeuforward.org/plus/dsa/problems/ninja's-training?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

A ninja has planned a n-day training schedule. Each day he has to perform one of **three activities** - running, stealth training, or fighting practice. The same activity cannot be done on two consecutive days and the ninja earns a specific number of merit points, based on the activity and the given day.

Given a n x 3-sized matrix, where matrix[i][0], matrix[i][1], and matrix[i][2], represent the merit points associated with running, stealth and fighting practice, on the (i+1)^th day respectively. Return the **maximum** possible merit points that the ninja can earn.

### Example 1

<p>

**Input:** matrix = [[10, 40, 70], [20, 50, 80], [30, 60, 90]]</p><p>

**Output:** 210</p><p>

**Explanation:** </p>Day 1: fighting practice = 70

Day 2: stealth training = 50

Day 3: fighting practice = 90

Total = 70 + 50 + 90 = 210

This gives the optimal points.

### Example 2

<p>

**Input:** matrix = [[70, 40, 10], [180, 20, 5], [200, 60, 30]]</p><p>

**Output:** 290</p><p>

**Explanation:** </p>Day 1: running = 70

Day 2: stealth training = 20

Day 3: running = 200

Total = 70 + 20 + 200 = 290

This gives the optimal points.

### Constraints

- 1 <= n <= 10^4
- n == number of rows in matrix
- 3 == number of columns in matrix
- 0 <= matrix[i][j] <= 1000

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
