#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
    }
}