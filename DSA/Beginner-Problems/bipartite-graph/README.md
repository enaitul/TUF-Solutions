# [Bipartite graph](https://takeuforward.org/practice/dsa/bipartite-graph?category=cycles&source=strivers-a2z-dsa-sheet&solution=bfs)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given an undirected graph with V vertices labeled from 0 to V-1.&nbsp;The graph is represented using an 2D vector **edges** ,where edges[i] represent an undirected edge between edges[i][0] and edges[i][1]. Determine if the graph is **bipartite** or not.

A graph is bipartite if the nodes can be partitioned into two independent sets A and B such that every edge in the graph connects a node in set A and a node in set B.

### Example 1:

**Input:** V=4, edges = [ [0, 1], [0, 3], [1, 2], [2, 3] ]

**Output:** True

**Explanation:** The given graph is bipartite since, we can partition the nodes into two sets: {0, 2} and {1, 3}.

### Example 2:

**Input:** V=4, edges = [ [0, 1], [0, 2], [0, 3], [2, 1], [3, 2] ]

**Output:** False

**Explanation:** The graph is not bipartite. If we attempt to partition the nodes into two sets, we encounter an edge that connects two nodes within the same set, which violates the bipartite property.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- E=number of edges
- 1 ≤ V, E ≤ 10<sup style="background-color:var(--background);color:var(--text-color)">4</sup>

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
