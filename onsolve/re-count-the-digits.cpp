#include <iostream>
#include <math.h>
#include <string>

using namespace std;

double numberOfDigits(long long n, int base) {
    if (n == 0) {
        return 1;
    }
    if (base == 10) {
        return (floor(log10(n)) + 1);
    }
    return (floor((double)log(n) / (double)log(base)) + 1);
}

int main() {
    int T, b;
    long long int n;
    cin >> T;
    while (T--) {
        double num_digits = 0;
        cin >> n >> b;
        for (int i = 0; i <= n; i++) {
            num_digits += numberOfDigits(i, b);
        }
        cout << num_digits << endl;
    }
    return 0;
}