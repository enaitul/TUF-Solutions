# [Topological sort or Kahn's algorithm](https://takeuforward.org/practice/dsa/topological-sort-or-kahns-algorithm?category=cycles&source=strivers-a2z-dsa-sheet&solution=bfs-%28kahn%27s-agorithm%29)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given a Directed Acyclic Graph (DAG) with V vertices labeled from 0 to V-1.The graph is represented using an adjacency list where adj[i] lists all nodes connected to node. Find any **Topological** Sorting of that Graph.

In topological sorting, node u will always appear before node v if there is a directed edge from node u towards node v(u -> v).

The function should **return** an **array** representing the topological order. The output will be validated by our driver code, which checks the correctness of your topological sort. It will print **True** if the order is valid, otherwise **False.**

### Example 1:

**Input:** V = 6,adj=[ [ ], [ ], [3], [1], [0,1], [0,2] ]

<img src="https://static.takeuforward.org/content/1788143851_DKB-gPRt.webp">

**Output:** [5, 4, 2, 3, 1, 0]

**Explanation:** A graph may have multiple topological sortings.&nbsp;

- Node 5 must appear before 0 and 2
- Node 2 must appear before 3
- Node 3 must appear before 1
- Node 4 must appear before 0 and 1

**One valid topological order is: [5, 4, 2, 3, 1, 0]**

### Example 2:

**Input:** V = 4, adj=[ [ ], [0], [0], [0] ]

<img src="https://static.takeuforward.org/content/1788143911_fLWGKfIC.webp">

**Output:** [3, 2, 1, 0]

**Explanation:** The necessary conditions for the ordering are:

- Nodes 1, 2, and 3 must all appear before 0.
- Their internal order doesn’t matter.

**One valid topological order is: [3, 2, 1, 0]**

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 ≤ V ≤ 10⁴
- 0 ≤ number of edges ≤ 10⁴

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
