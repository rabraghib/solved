#include <algorithm>
#include <iostream>

using namespace std;

int maxBlackKeys(int n, int k, string status) {
    if (k == 0)
        return 0;
    int maxBlackKeysV = 0, l = 0, r = 0;
    int InitBlackKeysNumber = maxBlackKeysV = count(status.begin(), status.end(), 'N');
    int i = 0, j = n;
    while (i < j) {
        if (status[j - 1] == 'N') {
            j--;
            continue;
        } else if (status[i] != 'N') {
            int curNumberOfBlacks = InitBlackKeysNumber + (2 * count(status.begin() + i, status.begin() + j, 'B')) + i - j;
            // cout << "i = " << i << "\tj = " << j << "\tcurNumberOfBlacks = " <<
            // curNumberOfBlacks << endl;

            if (curNumberOfBlacks > maxBlackKeysV) {
                maxBlackKeysV = curNumberOfBlacks;
                l = i;
                r = j;
            }
        }
        i++;
    }
    replace(status.begin() + l, status.begin() + r, 'N', 'T');
    replace(status.begin() + l, status.begin() + r, 'B', 'N');
    replace(status.begin() + l, status.begin() + r, 'T', 'B');
    int curNumberOfBlacks = maxBlackKeys(n, k - 1, status);
    if (curNumberOfBlacks > maxBlackKeysV) {
        maxBlackKeysV = curNumberOfBlacks;
    }
    return maxBlackKeysV;
}

int main() {
    int T, n, K;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> n >> K;
        string status;
        cin >> status;
        cout << maxBlackKeys(n, K, status) << endl;
    }
}