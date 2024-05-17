#include <iostream>
#include <random>
#include <cstdlib>

using namespace std;

// Function to generate a single test case
void generateTestCase(int test_case_number) {
    // Fixed seed value for reproducibility
    const int seed = 42 + test_case_number; // Adjust the seed for each test case

    // Random number generator seeded with fixed value
    mt19937 gen(seed);

    // Number of rooms (N)
    int N = uniform_int_distribution<int>(1, 10)(gen);

    // Initial energy (E)
    int E = uniform_int_distribution<int>(0, 1e9)(gen);

    cout << N << " " << E << endl;

    // Difficulty levels of puzzles in each room
    for (int i = 0; i < N; ++i) {
        if (i > 0) cout << " ";
        int P = uniform_int_distribution<int>(1, 1000)(gen);
        cout << P;
    }
    cout << endl;
}

int main(int argc, char* argv[]) {
    // Fixed seed value for reproducibility
    const int seed = 42;

    // Random number generator seeded with fixed value
    mt19937 gen(seed);

    // Number of test cases (T)
    int T;
    if (argc > 1) {
        T = atoi(argv[1]);
    } else {
        T = uniform_int_distribution<int>(1, 10)(gen); // Generate a random number of test cases
    }

    cout << T << endl;

    for (int i = 0; i < T; ++i) {
        generateTestCase(i);
    }

    return 0;
}