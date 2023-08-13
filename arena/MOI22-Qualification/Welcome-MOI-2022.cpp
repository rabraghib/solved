#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        int max_groups = 0;
        for (int i = 1; i <= sqrt(n); i++) {
            int k = n / i;
            if (k >= i) {
                max_groups = i;
            }
        }
        cout << max_groups << endl;
    }
}
