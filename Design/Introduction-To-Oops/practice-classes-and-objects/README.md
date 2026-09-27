# [Practice (Classes and Objects)](https://takeuforward.org/practice/design/practice-classes-and-objects?category=introduction-to-oops&source=oops)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

You are tasked with designing a class **Student** that stores and displays information about students.

The class must have the following :

**Attributes** :

- *name* (string) : Stores the name of the student.
- *rollNumber* (int) : Stores the roll number of the student

**Methods** :

- *setDetails* (String name, int rollNumber) : This method initializes the attributes name and rollNumber with the values provided by the user.
- *displayDetails* () : This method prints the details of the student in following format (The output consist of two separate lines) :

Refer the sample input example to understand the output format.

Refer the commented code on IDE for output statements.

### Example 1:

**Input:** Name - "Striver" , Roll Number : 101

**Output:**

Name : Striver

Roll Number : 101

**Explanation:**

- A Student object is created in Main class.
- The setDetails() method is called with "Striver" and 101 as arguments. This initializes the name attribute to "Striver" and the rollNumber attribute to 101.
- The displayDetails() method is invoked , which prints the student's details in the required format.

### Example 2:

**Input:** Name - "Jax" , Roll Number : 10434

**Output:**

Name : Jax

Roll Number : 10434

**Explanation:**

- A Student object is created in Main class.
- The setDetails() method is called with "Jax" and 10434 as arguments. This initializes the name attribute to "Jax" and the rollNumber attribute to 10434.
- The displayDetails() method is invoked , which prints the student's details in the required format.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= roll number <= 10^6

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
