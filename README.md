# DAA432C Assignment-06

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIB2019034  |   Sanket Kokude | Sanket-Kokude | 
|    IIB2019035  |   Harshit Kumar | stargazer612 |
|    IIB2019036  |   Viful Nirala | Artemis |

**Group No-**"31"

**Faculty Name-**"Dr. Rahul Kala"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Design a parallel algorithm for the Tower of Hanoi problem where parallel moves are allowed.

---
## How to use code
```
#Download project
https://github.com/stargazer612/daa3
```
---

Run the code
```
g++ daa3.cpp
```
---

**Test case**
```  
Enter the number of disks: 10
1
2
3
4
5
6
7
8
9
10
```
---

### Theory
Tower of Hanoi is a mathematical puzzle where we have
three rods and n disks. The objective of the puzzle is to move
the entire stack to another rod, obeying the following simple
rules:  
• Only one disk can be moved at a time.  
• Each move consists of taking the upper disk from one of
the stacks and placing it on top of another stack i.e. a
disk can only be moved if it is the uppermost disk on a
stack.  
• No disk may be placed on top of a smaller disk.  
A parallel algorithm is an algorithm that can solve several
sub-problem simultaneously and then combine all the individual outputs to produce the final result.  

---

### Analysis

**Time Complexity : O(n*logn)**  
T(n) = 2T(n/2) + O(n)  
By solving this recurrence relation by master theorem we get time complexity as O(n*logn).

**Space Complexity : O(n)**
In this approach we will have the space complexity as O(n).

---

### References

1. https://en.wikipedia.org/wiki/Tower of Hanoi
2. https://www.geeksforgeeks.org/c-program-for-tower-of-hanoi
3. Cormen, Leiserson, Rivest, and Stein (2009). Introduction to Algorithms, 3rd edition. 
