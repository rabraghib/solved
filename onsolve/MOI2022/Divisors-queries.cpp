#include <iostream>

using namespace std;

int main() {
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        int num_divisors = 1;
        for (int i = 2; i <= n; i = i + 2) {
            int iPow = 0;
            while (n % i == 0) {
                iPow++;
                n = n / i;
            }
            num_divisors *= (iPow + 1);
            if (i == 2)
                i = 1;
        }
        cout << num_divisors << endl;
    }
}