# Types_of_Algorithms

This repository contains some methods to solve knapsack problem, using different Algorithms. 4 major types of agorithms are Brute Force Algorithm, Greedy Algorithm, Divide and conquer and Dynamic Programming. These 4 types are demonstrated here.

## Brute Force Algorithm

This algorithm considers all possile solutions for a prolem, one by one, and selects the optimal solution.
This approach is rarely efficient and more suitable for problems with smaller inputs.
Time complexity of this algorithm is O(2^n).

## Dynamic Programming

This algorithm is commonly used with optimizational problems. However, the problem should be able to be divided into smaller subproblems. In most times, this algorithm is used to covert a exponential run-time algorithm into a polynomial run-time algorithm.
The main feature of this algorithm is that it stores data of subproblems, so that it does not need to recompute the subproblems again.
Time complexity of this algorithm for knapsack problem is O(nW) where n is the number of items and W is the capacity of knapsack.
