#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int sg(long long i, int m, vector<int>* memory) {
    if (&memory[i]) {
        return (int)&memory[i];
    }
    return 0;
}

int main() {
    int T, m;
    long long n;
    vector<int> memory(05);
    cin >> T;
    while (T--) {
        int result = 0;
        cin >> n >> m;
        for (long long i = 0; i < n; i++) {
            result = (result + sg(i, m, &memory)) % m;
        }
        cout << m << endl;
    }
    return 0;
}
