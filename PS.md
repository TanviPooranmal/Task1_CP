# The Quantum Puzzle Rooms

## Problem Statement:

In a quantum universe, there exists a series of $N$ $(1 ≤ N ≤ 10^5)$ interconnected wormholes, each leading to a distinct numbered room. Each room contains a unique quantum puzzle that must be solved before you can move on to the next room.

Each room $i$ has a puzzle with a difficulty level $P_i$ $(1 ≤ P_i ≤ 1000)$. To solve the puzzle in room $i$, one requires an amount of energy equal to the difficulty level $P_i$. One can only move to the next room if it has enough energy to solve the puzzle.

A robotic explorer starts in the first room with $E$ units of quantum energy $(0 ≤ E ≤ 10^9)$. The robot's mission is to collect the maximum total puzzle difficulty points by solving as many puzzles as possible, given its initial energy.

### Input:

The first line of the input contains a single integer $T$ $(1 ≤ T ≤ 10)$, the number of test cases.

Each test case is described in two parts:

1. A single line containing two integers $N$ and $E$.
2. A second line containing $N$ integers $P_1,$ $P_2,$ $...,$ $P_N,$ representing the difficulty levels of the puzzles in each room.

### Output:

For each test case, print a single line containing one integer — the maximum total puzzle difficulty points that can be collected by the robot. 

If the robot can't solve any puzzle due to insufficient energy, print $-1$.

### Example:

```
Input:
2
5 10
2 3 5 7 11
4 6
1 1 1 1

Output:
10
4
```

### Explanation:

In the first test case, the robot starts with $10$ units of energy:

1. To solve the puzzle in room $1$, it requires $2$ energy (remaining energy: $8$, total points: $2$)
2. To solve the puzzle in room $2$, it requires $3$ energy (remaining energy: $5$, total points: $5$)
3. To solve the puzzle in room $3$, it requires $5$ energy (remaining energy: $0$, total points: $10$)
4. The robot can't move to the next room as it has no energy left to solve the puzzle in room $4$ which requires $7$ energy.
5. The robot collects a total of $10$ puzzle difficulty points.

In the second test case, the robot solves all puzzles since each requires only $1$ energy, which is less than the given initial energy.