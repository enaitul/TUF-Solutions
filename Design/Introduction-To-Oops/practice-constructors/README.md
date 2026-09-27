# [Practice (Constructors)](https://takeuforward.org/practice/design/practice-constructors?source=oops&category=introduction-to-oops)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Design a class **Rectangle** with the following specifications :

**Attributes** :

- *length* (double) : Represents the length of the rectangle
- *width* (double) : Represents the width of the rectangle.
- *area* (double) : Represents the area of rectangle.

**Constructors** :

- A *default constructor* that initializes both length and width to 1.0
- A *parameterized constructor* that takes two arguments to initialize length and width.

**Methods** :

- void *calculateArea* () : Computes the area of rectangle.
- void *displayDetails* () : Prints the rectangle's details, including its dimensions and area, in format specified below :

Refer the sample examples for understanding the output format.

Refer the commented code on IDE for output statements.

### Example 1:

**Input:** length = 5.0 , width = 3.0

**Output:**

Length : 1.00

Width : 1.00

Area : 1.00

Length : 5.00

Width : 3.00

Area : 15.00

**Explanation:**

- The program initialize the object r1 of class Rectangle using default constructor.
- Then it calls the calculateArea() method using r1 object.
- Then it calls the displayDetails() method using r1 object.
- Now program initializes another object r2 of class Rectangle using parameterized constructor with length and width as parameters.
- Then it calls the calculateArea() method using r2 object.
- Then it calls the displayDetails() method using r2 object.

### Example 2:

**Input:** length = 2.5 , width = 3.5

**Output:**

Length : 1.00

Width : 1.00

Area : 1.00

Length : 2.50

Width : 3.50

Area : 8.75

**Explanation:**

- The program initialize the object r1 of class Rectangle using default constructor.
- Then it calls the calculateArea() method using r1 object.
- Then it calls the displayDetails() method using r1 object.
- Now program initializes another object r2 of class Rectangle using parameterized constructor with length and width as parameters.
- Then it calls the calculateArea() method using r2 object.
- Then it calls the displayDetails() method using r2 object.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= length , width <= 10^4

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
