#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T, n, m;
    cin >> T;
    while (T--) {
        cin >> n >> m;
        vector<int> v(n);
        vector<vector<int>> raods(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++) {
            int from, to;
            cin >> from >> to;
            raods[from - 1][to - 1] = 1;
        }
        /// todo
    }
}