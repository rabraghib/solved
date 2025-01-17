#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

// def solution_checksum(solution):
//     cs = 0
//     for c in solution:
//         cs = (cs * 243 + ord(c)) % 100000007

//     return cs % 100000007

// def solutions_checksum(solutions):
//     checksums = [solution_checksum(s) for s in solutions]
//     cs_sum = sum(checksums, 0) % 100000007

//     return cs_sum

int main() {
    int N;
    cin >> N;
    vector<vector<char>> S(N, vector<char>(N));
    vector<vector<char>> E(N, vector<char>(N));
    // Getting inputs
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cin >> S[i][j];
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cin >> E[i][j];
    }

    // Calculate

    cin >> N;
}
