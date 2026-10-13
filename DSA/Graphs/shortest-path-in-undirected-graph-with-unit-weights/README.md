# [Shortest path in undirected graph with unit weights](https://takeuforward.org/practice/dsa/shortest-path-in-undirected-graph-with-unit-weights?category=hard-problems&source=strivers-a2z-dsa-sheet)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given a Undirected Graph of N vertices from 0 to N-1 and M edges and a 2D Integer array edges, where there is a edge from vertex edges[i][0] to vertex&nbsp;edges[i][1] of unit weight.

Find the **shortest path** from the source to all other nodes in this graph. In this problem statement, we have assumed the **source vertex** to be **‘0’** . If a vertex is unreachable from the source node, then return -1 for that vertex.

### Example 1:

**Input:** n = 9, m = 10, edges = [[0,1],[0,3],[3,4],[4,5],[5, 6],[1,2],[2,6],[6,7],[7,8],[6,8]]

**Output:** 0 1 2 1 2 3 3 4 4

**Explanation:**

The above output array shows the shortest path to all&nbsp;

the nodes from the source vertex (0), Dist[0] = 0,&nbsp;Dist[1] = 1 , Dist[2] = 2 , …. Dist[8] = 4.Where Dist[node] is the shortest path between src and&nbsp;the node. For a node, if the value of Dist[node]= -1,&nbsp;then we conclude that the node is unreachable from&nbsp;the src node.

### Example 2:

**Input:** n = 8, m = 10, edges =[[1,0],[2,1],[0,3],[3,7],[3,4],[7,4],[7,6],[4,5],[4,6],[6,5]]

**Output:** 0 1 2 1 2 3 3 2

**Explanation:** &nbsp;

The above output list shows the shortest path to all the&nbsp;nodes from the source vertex (0),&nbsp;Dist[0] = 0,&nbsp;Dist[1] = 1, Dist[2] = 2,.....Dist[7] = 2.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1<=n,m<=10^4
- 0<=edges[i][j]<=n-1

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
