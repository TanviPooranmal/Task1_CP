// Include necessary libraries
#include <iostream>
#include <vector>

// Namespace declaration
using namespace std;

// Main function
int main() {
    // Declare variable T to store the number of test cases
    int T;

    // Read the number of test cases from standard input
    cin >> T;

    // Loop through each test case
    while (T--) {
        // Declare variables N (number of rooms) and E (initial energy)
        long long N;
        long long E;

        // Read N and E from standard input
        cin >> N >> E;

        // Declare a vector P to store difficulty levels of puzzles in each room
        vector<long long> P(N);

        // Read difficulty levels of puzzles from standard input and store them in vector P
        for (long long i = 0; i < N; ++i) {
            cin >> P[i];
        }

        // Initialize total_points to store the total puzzle difficulty points collected
        long long total_points = 0;

        // Iterate through each room
        for (long long i = 0; i < N; ++i) {
            // Check if the robot has enough energy to solve the puzzle in the current room
            if (E >= P[i]) {
                // If enough energy is available, solve the puzzle and update total_points and remaining energy
                E -= P[i];
                total_points += P[i];
            } else {
                // If energy is insufficient to solve the puzzle, break the loop
                break;
            }
        }

        // Check if no puzzle was solved and the robot has insufficient energy to solve the first puzzle
        if (total_points == 0 && E < P[0]) {
            // Print -1 if no puzzle was solved due to insufficient energy
            cout << -1 << endl;
        } else {
            // Otherwise, print the total puzzle difficulty points collected
            cout << total_points << endl;
        }
    }

    // Exit the program
    return 0;
}