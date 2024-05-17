# Editorial for “The Quantum Puzzle Rooms”

## Problem Recap

In this problem, we have a series of rooms, each with a unique puzzle of varying difficulty. A robot starts in the first room with a given amount of energy and can only move to the next room if it has enough energy to solve the puzzle there. The goal is to determine the maximum total puzzle difficulty points the robot can collect by solving as many puzzles as possible.

## Input and Output

### Input:

The first line contains an integer $T$, the number of test cases.

Each test case consists of two lines:

1. The first line contains two integers $N$ (number of rooms) and $E$ (initial energy).
2. The second line contains $N$ integers representing the difficulty levels of the puzzles in each room.

### Output:

For each test case, print a single integer — the maximum total puzzle difficulty points the robot can collect. If the robot cannot solve any puzzles due to insufficient energy, print $-1$.

## Example

```
Input:

3
5 10
2 3 5 7 11
4 6
1 1 1 1
6 5
6 2 4 8 3 5

Output:

10
4
-1
```

## Explanation

### Test Case 1:

- The robot starts with $10$ energy.
- Room $1$: Requires $2$ energy (remaining: $8$, total points: $2$)
- Room $2$: Requires $3$ energy (remaining: $5$, total points: $5$)
- Room $3$: Requires $5$ energy (remaining: $0$, total points: $10$)
- The robot cannot proceed to room $4$, so the total points are $10$.

### Test Case 2:

- The robot starts with $6$ energy.
- Room $1$: Requires $1$ energy (remaining: $5$, total points: $1$)
- Room $2$: Requires $1$ energy (remaining: $4$, total points: $2$)
- Room $3$: Requires $1$ energy (remaining: $3$, total points: $3$)
- Room $4$: Requires $1$ energy (remaining: $2$, total points: $4$)
- The robot solves all puzzles, collecting a total of $4$ points.

### Test Case 3:

- The robot starts with $5$ energy.
- Room $1$: Requires $6$ energy (not enough energy to solve).
- The robot cannot solve any puzzles, so the output is $-1$.

## Approach and Solution

### Initialization and Input Parsing:

1. Read the number of test cases.
2. For each test case, read $N$ and $E$.
3. Read the list of puzzle difficulties.

### Simulation of Puzzle Solving:

1. Initialize `current_energy` with the initial energy $E$.
2. Initialize `total_points` to keep track of the accumulated difficulty points.
3. Iterate through each room and check if the robot has enough energy to solve the puzzle.
4. If the robot can solve the puzzle, subtract the puzzle difficulty from the current energy and add the difficulty to the total points.
5. If the robot cannot solve the puzzle, break the loop.

### Handling Edge Cases:

1. If the robot starts with $0$ energy, it cannot solve any puzzles.
2. If all puzzles are too difficult given the initial energy, the robot collects no points.

### Output the Results:

For each test case, print the total points or $-1$ if the robot cannot solve any puzzles.

## Complexity Analysis

### Time Complexity:

Each test case involves iterating over the list of puzzles once, making the complexity $O(N)$ per test case.
Since $N$ can be as large as $100,000$ and $T$ can be up to $10$, the worst-case scenario involves handling up to $1,000,000$ puzzles in total, which is efficient for `linear processing`.

### Space Complexity:

The space complexity is $O(N)$ for storing the puzzle difficulties of each test case.

## Implementation

```c++
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        long long E;
        cin >> N >> E;
        vector<int> P(N);
        for (int i = 0; i < N; ++i) {
            cin >> P[i];
        }

        long long total_points = 0;

        for (int i = 0; i < N; ++i) {
            if (E >= P[i]) {
                E -= P[i];
                total_points += P[i];
            } else {
                break;
            }
        }

        if (total_points == 0 && E < P[0]) {
            cout << -1 << endl;
        } else {
            cout << total_points << endl;
        }
    }
    return 0;
}
```

## Conclusion

In conclusion, "The Quantum Puzzle Rooms" presents a captivating challenge where a robotic explorer navigates through a series of interconnected rooms, each housing a unique puzzle of varying difficulty. By managing its energy resources effectively, the robot aims to maximize the total puzzle difficulty points collected during its journey.

The problem encourages algorithmic thinking and careful planning, as the robot must make strategic decisions to solve as many puzzles as possible given its initial energy constraints. Through simulation and iteration, the solution efficiently determines the maximum achievable points for each test case.

The editorial provides a clear step-by-step approach to tackle the problem, emphasizing input parsing, simulation of puzzle solving, handling edge cases, and outputting the results. Additionally, complexity analysis highlights the efficiency of the proposed solution, ensuring scalability for large input sizes.