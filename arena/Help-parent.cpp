#include <iostream>
#include <string>

using namespace std;

int main() {
    int T, M;
    string word;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> M >> word;
        string v_word = word.substr(0, M - 1) + word.substr(M);
        cout << i << " " << v_word << endl;
    }
}
