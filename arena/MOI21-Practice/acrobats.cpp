#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long L;
        cin >> L;
        int num_of_persons = (long long)((((long double)(L % 1000000007) / 2) * ((L - 1) % 1000000007)) + 1) % 1000000007;
        cout << num_of_persons << endl;
    }
}
