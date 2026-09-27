# [Practice (Attributes and Methods)](https://takeuforward.org/practice/design/practice-attributes-and-methods?category=introduction-to-oops&source=oops)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Design a class **BankAccount** with the following specification :

**Attributes** :

- *accountNumber* (string) : Represents the account number of the user's account
- *balance* (double) : Represents the balance of the account

**Constructor** :

- Implement a *parameterised constructor* to have the accountNumber and balance initialised while creating the object.

**Methods** :

- *deposit* (double amount) : It adds the amount to the balance of the user's account.
- *withdraw* (double amount) : It deducts the money (amount) from the balance. If the balance is insufficient then print "Insufficient funds!" and do not change the original amount.
- *displayDetails* () : It displays the accountNumber and balance of the account.

Refer the sample examples for understanding the output format.

**Note** :

Use the exact output format given in example with matching case and whitespaces else may face wrong answers.

Use the name convention for classes and methods as given in the IDE commented code or the problem statement to avoid the compilation error.

All outputs should always be displayed with exactly 2 decimal places.

### Example 1:

**Input:** accountNumber = "9662375274869" , balance = 8655 , addBalance = 5854 , withdrawBalance = 9437

**Output:**

Account Number : 9662375274869

Balance : 5072.00

**Explanation:**

- The object of the class **BankAccount** is created using the parameterised constructor with accountNumber and balance as the two arguments to constructor.
- Then the deposit() *m* ethod is called with parameter addBalance.
- Next the *withdrawbalance()* method is called with parameter withdrawBalance, Here the withdrawal balance is 9437 and Balance is 14509. So we can withdraw the given amount.
- Next the **displayDetails** *()* method is called which displays the account number and balance present in the account.

### Example 2:

**Input:** accountNumber = "9662375274869" , balance = 8655 , addBalance = 10, withdrawBalance = 9437

**Output:**

Insufficient funds!

Account Number : 9662375274869

Balance : 8665.00

**Explanation:**

- The object of the class **BankAccount** is created using the parameterised constructor with accountNumber and balance as the two arguments to constructor.
- Then the deposit() *m* ethod is called with parameter addBalance.
- Next the *withdrawbalance()* method is called with parameter withdrawBalance, Here the withdrawal balance is 9437 and Balance is 8665. So we cannot withdraw the given amount so print "Insufficient funds!".
- Next the **displayDetails** *()* method is called which displays the account number and balance present in the account.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= amount <= 10^5

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
