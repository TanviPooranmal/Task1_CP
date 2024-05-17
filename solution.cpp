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
