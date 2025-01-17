#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<vector<size_t>> schedule(N, vector<size_t>(3));
        for (int i = 0; i < N; i++) {
            cin >> schedule[i][0];
            cin >> schedule[i][1];
            cin >> schedule[i][2];
            schedule[i][2] = min(schedule[i][1] - schedule[i][0] + 1, schedule[i][2]);
        }

        sort(schedule.begin(), schedule.end(),
            [](const vector<size_t>& a, const vector<size_t>& b) {
                if (a[0] <= b[0]) {
                    return a[0] < b[0] || a[1] < b[1];
                }
                return false;
            });

        for (int i = 1; i < N; i++) {
            if (schedule[i - 1][1] >= schedule[i][0]) {
                schedule[i][0] = min(schedule[i][0], schedule[i - 1][0]);
                schedule[i][1] = max(schedule[i][1], schedule[i - 1][1]);
                schedule[i][2] = min(schedule[i][1] - schedule[i][0] + 1,
                    schedule[i][2] + schedule[i - 1][2]);
                schedule[i - 1][0] = 0;
                schedule[i - 1][1] = 0;
                schedule[i - 1][2] = 0;
            }
        }
        int res = 0;
        for (int i = 1; i < N; i++) {
            res += schedule[i][2];
        }
        cout << res << endl;
    }
}