# [Intersection of two sorted arrays](https://takeuforward.org/practice/dsa/intersection-of-two-sorted-arrays?category=logic-building&source=strivers-a2z-dsa-sheet)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given two sorted arrays, **nums1** and **nums2** , return an array containing the intersection of these two arrays. Each element in the result must appear as many times as it appears in both arrays; that is, if an element appears x times in nums1 and y times in nums2, it should appear min(x, y) times in the result.

The intersection of two arrays is an array where all values are present in both arrays.

### Example 1:

**Input:** nums1 = [1, 2, 2, 3, 5], nums2 = [1, 2, 7]

**Output:** [1, 2]

**Explanation:**

The elements 1, 2 are the only elements present in both nums1 and nums2

### Example 2:

**Input:** nums1 = [1, 2, 2, 3, 3, 3], nums2 = [2, 3, 3, 4, 5, 7]

**Output:** [2, 3, 3]

**Explanation:**

The element 2 appears in both arrays only one time.

The element 3 appears in both arrays two times so we add element 3 equal to its number of occurrences.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= nums1.length, nums2.length <= 1000
- -10^4 <= nums1[i], nums2[i] <= 10^4
- Both nums1 and nums2 are sorted in non-decreasing order.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
