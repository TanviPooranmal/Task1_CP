#include "testlib.h"
#include <ctime>

int main(int argc, char* argv[]) {
    // If a seed is provided via the command line, use it; otherwise, use the current time
    long long seed = argc > 1 ? atoll(argv[1]) : time(0);
    registerGen(argc, argv, 1);
    rnd.setSeed(seed);

    int T = rnd.next(1, 10);
    println(T);

    for (int t = 0; t < T; ++t) {
        int N = rnd.next(1, (int)1e5);
        int E = rnd.next(0, (int)1e9);
        println(N, E);
    }

    return 0;
}
