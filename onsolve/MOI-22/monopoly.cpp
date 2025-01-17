#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> codeNames(n);
    for (int i = 0; i < n; i++) {
        cin >> codeNames[i];
    }
    while (q--) {
        int l, r;
        cin >> l >> r;

        map<int, int> counters;
        int dominantCodeName = -1;
        int dominantMin = (r - l + 1) / 2;

        for (int i = l - 1; i < r; i++) {
            int maxCount = dominantCodeName != -1 ? counters[dominantCodeName] : 0;
            counters[codeNames[i]]++;
            if (counters[codeNames[i]] > dominantMin) {
                dominantCodeName = codeNames[i];
                break;
            }
            if (r - i < dominantMin - maxCount) {
                break;
            }
        }

        cout << dominantCodeName << endl;
    }
}
