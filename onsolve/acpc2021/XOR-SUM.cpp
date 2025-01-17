#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T, N;
    string bin1, bin2;
    cin >> T;
    while (T--) {
        int diff = 0;
        bool hasZeros = false;
        cin >> N;
        cin >> bin1 >> bin2;
        for (int i = 0; i < N; i++) {
            if (bin1[i] != '0' && bin1[i] == bin2[i]) {
                diff++;
            }
            if (bin1[i] == '0') {
                hasZeros = true;
            }
        }
        if (diff == 0 || (hasZeros && diff == 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}