#include <iostream>

using namespace std;

int main() {
    int low = 1, high = 2000000000, mid = 0;
    string state;
    while (state != "OK") {
        mid = low + ((high - low) / 2);
        cout << mid << endl;
        cin >> state;
        if (state == "FLOATS") {
            low = mid + 1;
        } else if (state == "SINKS") {
            high = mid - 1;
        }
    }
}
