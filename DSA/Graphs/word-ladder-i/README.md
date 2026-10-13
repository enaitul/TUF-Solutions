# [Word ladder I](https://takeuforward.org/practice/dsa/word-ladder-i?category=hard-problems&source=strivers-a2z-dsa-sheet)

![Difficulty: Pro](https://img.shields.io/badge/Difficulty-Pro-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

Given are the two distinct words startWord and targetWord, and a list of size N, denoting wordList of **unique words** of equal size M. Find the length of the shortest transformation sequence from startWord to targetWord.

Keep the following conditions in mind:

- A word can only consist of lowercase characters.
- Only one letter can be changed in each transformation.
- Each transformed word must exist in the wordList including the targetWord.
- startWord may or may not be part of the wordList

**Note:** &nbsp;If there’s no possible way to transform the sequence from startWord to targetWord return 0.

### Example 1:

**Input:** wordList = ["des","der","dfr","dgt","dfs"], startWord = "der", targetWord = "dfs"

**Output:** 3

**Explanation:** &nbsp;

- The length of the smallest transformation sequence from "der" to&nbsp;"dfs" is 3
- i.e. "der" -> (replace ‘e’ by ‘f’) -> "dfr" -> (replace ‘r’ by ‘s’)&nbsp;-> "dfs".
- So, it takes 3 different strings for us to reach the targetWord. Each of these strings are present in the wordList.

### Example 2:

**Input:** wordList = ["geek", "gefk"], startWord = "gedk", targetWord= "geek"

**Output:** 2

**Explanation:** &nbsp;

- The length of the smallest transformation sequence&nbsp;from "gedk" to "geek" is 2
- i.e. "gedk" -> (replace ‘d’ by ‘e’) -> "geek"&nbsp;.
- So, it takes 2 different strings for us to reach the targetWord.&nbsp;Each of these strings are present in the wordList.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 ≤ wordList.length ≤ 100
- 1 ≤ wordList[i].length ≤ 10
- startWord.length == targetWord.length == wordList[i].length
- startWord, targetWord, and wordList[i] consist of lowercase English letters.
- startWord!= targetWord

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
