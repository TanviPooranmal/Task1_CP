# Editorial for “The Quantum Maze”

## Problem Recap

In “The Quantum Maze”, we start in room $1$ with $E$ units of energy. We can teleport to any other room instantly, but the energy required to teleport from room $i$ to room $j$ is equal to the absolute difference of their indices, i.e., $|i - j|$. The task is to determine the minimum number of teleports required for the robot to reach room $N$. If it’s not possible to reach room $N$, we print $-1$.

### Solution Approach

The key to solving this problem lies in understanding the relationship between the number of rooms $N$, the initial energy $E$, and the minimum number of teleports required to reach room $N$.

If we have enough energy to reach room $N$ directly from room $1$, i.e., if $E>= N - 1$, then the robot can reach room $N$ in $1$ teleport. However, if $E < N - 1$, then it’s not possible for the robot to reach room $N$, and we print $-1$.

### Implementation Details

```c++
#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N, E;
        cin >> N >> E;
        if (E < N - 1) {
            cout << "-1" << endl;
        } else {
            cout << min(E, N) << endl;
        }
    }
    return 0;
}
```

This code first reads the number of test cases. For each test case, it reads the number of rooms $N$ and the initial energy $E$. If $E < N - 1$, it prints $-1$. Otherwise, it prints the minimum of $E$ and $N$, which represents the maximum distance we can reach.

## Conclusion

“The Quantum Maze” is a problem that tests your understanding of basic mathematical relationships and your ability to implement them in code. While the problem statement might seem complex at first glance, the solution is quite straightforward once you understand the underlying principles.