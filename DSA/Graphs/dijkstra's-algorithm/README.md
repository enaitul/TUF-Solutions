# [Dijkstra's algorithm](https://takeuforward.org/practice/dsa/dijkstra's-algorithm?category=shortest-path-algorithms&source=strivers-a2z-dsa-sheet&solution=using-set)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given a weighted, undirected graph of V vertices, numbered from 0 to V-1, and an 2D vector/array which represents the edges:

Each entry in **edges[i] i** s of the form **[u, v, weight]** , where:

- **u, v** → represents the vertex having undirected edge between them
- **weight →** the weight of the edge between u and v

Given a source node S. Find the shortest distance of all the vertex from the source vertex S. Return a list of integers denoting **shortest distance** between each node and source vertex S. If a vertex is not reachable from source then its distance will be 10^9.

### Example 1:

<img src="https://static.takeuforward.org/content/1788247625_b_Myy9XY.webp">

**Input:** V = 2, edges = [[0,1,9]] , S=0

**Output:** [0, 9]

**Explanation:**

The shortest distance from node 0(source) to node 0 is 0 and the shortest distance from node 0 to node 1 is 9.

### Example 2:

<img src="https://static.takeuforward.org/content/1788248022_14cyNLz9.webp">

**Input:** V = 3, edges = [[0, 1, 1], [0, 2, 6], [1, 2, 3]] , S=2

**Output:** [4, 3, 0]

**Explanation:**

For node 0, the shortest path is 2->1->0 (distance=4)

For node 1, the shortest path is 2->1 (distance=3)

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 ≤ V ≤ 10000
- 0 ≤ edges[i][j] ≤ 10000
- 1 ≤ edges.size() ≤ [ (V*(V - 1)) / 2 ]
- 0 ≤ S < V

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
