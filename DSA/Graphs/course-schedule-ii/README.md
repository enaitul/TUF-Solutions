# [Course Schedule II](https://takeuforward.org/practice/dsa/course-schedule-ii?category=hard-problems&source=strivers-a2z-dsa-sheet)

![Difficulty: Pro](https://img.shields.io/badge/Difficulty-Pro-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

There are a total of N tasks, labeled from 0 to N-1. Given an array arr where arr[i] = [a, b] indicates that you must take course **b** first if you want to take course **a.** Find the **order of tasks** you should pick to finish all tasks.

If no such ordering exists, return an empty array.

Since multiple valid answers are possible, you can return any answer.

Note : The output visible will be 1 if your solution is correct, otherwise -1.

### Example 1:

**Input:** N = 4,&nbsp;arr = [[1,0],[2,1],[3,2]]

**Output:** [0, 1, 2, 3]

**Explanation:** First,finish task 0, as it has no prerequisites. Then,finish task 1, since it depends only on task 0. After that,finish task 2, since it depends only on task 1. Finally,finish task 3, since it depends only on task 2

### Example 2:

**Input:** N = 4,&nbsp;arr = [[0,1],[3,2],[1,3],[3,0]]

**Output:** []

**Explanation:** It is impossible to finish all the tasks. Let’s analyze the pairs:

For pair **{0, 1}** → we need to finish task 1 first and then task 0 (order: 1 → 0).

For pair **{3, 2}** → we need to finish task 2 first and then task 3 (order: 2 → 3).

For pair **{1, 3}** → we need to finish task 3 first and then task 1 (order: 2 → 3 → 1 → 0).

But for pair **{3, 0}** → we need to finish task 0 first and then task 3, which contradicts the previous order. So, it is not possible to finish all the tasks.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- &nbsp;&nbsp;1 <= N <= 2000
- &nbsp;&nbsp;0 <= arr.length <= 5000
- &nbsp;&nbsp;arr[i].length == 2
- &nbsp;&nbsp;0 <= arr[i][0], arr[i][1] < N
- &nbsp;&nbsp;All the pairs arr[i] are unique.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
