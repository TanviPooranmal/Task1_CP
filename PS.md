# The Quantum Maze

## Problem Statement:

In a quantum world, there exists a maze of N rooms $(1 ≤ N ≤ 10^5)$ arranged in a straight line. Each room has a quantum portal that can teleport you to any other room instantly. 

However, the energy required to teleport from room $i$ to room $j$ is equal to the absolute difference of their indices, i.e., $|i - j|$.

You start in room $1$ with $E$ units of energy $(0 ≤ E ≤ 10^9)$. Your task is to reach room $N$ in the minimum number of teleports. If it’s not possible to reach room $N$, print $-1$.

### Input:

The first line of the input contains a single integer $T$ $(1 ≤ T ≤ 10)$, the number of test cases.

Each test case is described by a single line containing two integers $N$ and $E$.

### Output:

For each test case, print a single line containing one integer — the minimum number of teleports required to reach room $N$. 
If it’s not possible, print $-1$.

### Example:

```
Input:
2
5 3
6 1

Output:
2
-1
```

### Explanation:

1. In the first example, you can teleport from room $1$ to room $4$ using $3$ units of energy, then teleport from room $4$ to room $5$ using $1$ unit of energy. So, the minimum number of teleports is $2$.

2. In the second example, you can only teleport from room $1$ to room $2$ using $1$ unit of energy. After that, you don’t have enough energy to teleport to any other room. So, it’s not possible to reach room $6$.