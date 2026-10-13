# [Shortest path in DAG](https://takeuforward.org/practice/dsa/shortest-path-in-dag?category=hard-problems&source=strivers-a2z-dsa-sheet)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given a Directed Acyclic Graph of N vertices from 0 to N-1 and M edges and a 2D Integer array edges, where there is a directed edge from vertex edge[i][0] to vertex&nbsp;edge[i][1] with a distance of edge[i][2] for all i.

Find the **shortest path** from source vertex to all the vertices and if it is impossible to reach any vertex, then return -1 for that vertex. The source vertex is assumed to be 0.

### Example 1:

<img src="https://static.takeuforward.org/content/1787655694_BTyX6zpH.webp">

**Input:** N = 4, M = 2 edge = [[0,1,2],[0,2,1]]

**Output:** 0 2 1 -1

**Explanation:**

Shortest path from 0 to 1 is 0->1 with edge weight 2.&nbsp;

Shortest path from 0 to 2 is 0->2 with edge weight 1.

There is no way we can reach 3, so it's -1 for 3.

### Example 2:

**Input:** N = 6, M = 7 edge = [[0,1,2],[0,4,1],[4,5,4],[4,2,2],[1,2,3],[2,3,6],[5,3,1]]

**Output:** 0 2 3 6 1 5

**Explanation:**

Shortest path from 0 to 1 is 0->1 with edge weight 2.&nbsp;

Shortest path from 0 to 2 is 0->4->2 with edge weight 1+2=3.

Shortest path from 0 to 3 is 0->4->5->3 with edge weight 1+4+1=6.

Shortest path from 0 to 4 is 0->4 with edge weight 1.

Shortest path from 0 to 5 is 0->4->5 with edge weight 1+4=5.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 ≤ N,M ≤ 5*10^4
- 0 ≤ edge[i][0],edge[i][1] < N-1
- 1 ≤ edge[i][2] < 10^4

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
