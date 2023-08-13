#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int T, N;
    long long int a;
    cin >> T;
    while (T--) {
        cin >> N;
        long double digitsNumber = 1;
        for (int i = 0; i < N; i++) {
            cin >> a;
            digitsNumber += log10(a);
        }
        cout << (int)digitsNumber << endl;
    }
}
