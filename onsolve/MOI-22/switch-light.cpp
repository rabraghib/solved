#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<bool> switches(n, false);
    while (q--) {
        int type, l, r; // range [l, r]
        cin >> type >> l >> r;
        if (type == 1) {
            for (int i = l; i <= r; i++) {
                switches[i] = !switches[i];
            }
        } else {
            int count = 0;
            for (int i = l; i <= r; i++) {
                if (switches[i] == true) {
                    count++;
                }
            }
            cout << count << endl;
        }
    }
}