#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void mincuts(vector<int> N, int n, vector<int> H, int h, int reqHeightsSum) {
    int min_cuts = n;
    bool isChanged = false;

    int i = 0, j = 0, undoneCutsHeights = reqHeightsSum;
    vector<int> Heights = H;
    while (i < n) {
        // if (j >= n)
        // {
        //     /* code */
        // }

        if (j >= n && !isChanged)
            break;
        else if (j >= n) {
            j = ++i;
            Heights = H;
            undoneCutsHeights = reqHeightsSum;
            continue;
        } else if (Heights[N[j] - 1] == 0) {
            j++;
            continue;
        } else {
            Heights[N[j] - 1]--;
            undoneCutsHeights--;
            int num_cuts_case = j - i + 1;
            if (undoneCutsHeights <= 0 && Heights[0] == 0 && num_cuts_case <= min_cuts) {
                min_cuts = num_cuts_case;
                isChanged = true;
                j = ++i;
                Heights = H;
                undoneCutsHeights = reqHeightsSum;
                continue;
            }
            j++;
        }
    }

    if (isChanged) {
        cout << min_cuts << endl;
    } else {
        cout << "-1" << endl;
    }
}

int main() {
    int T, n, h;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int reqHeightsSum = 0;
        cin >> n;
        cin >> h;
        vector<int> N(n), H(h);
        for (int i = 0; i < n; i++)
            cin >> N[i];
        for (int i = 0; i < h; i++) {
            cin >> H[i];
            reqHeightsSum += H[i];
        }
        mincuts(N, n, H, h, reqHeightsSum);
    }
}