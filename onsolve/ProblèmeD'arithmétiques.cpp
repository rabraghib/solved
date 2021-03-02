#include <iostream>

using namespace std;

int MthN(int n,int m){
    int k;
    if (n > m) {
        k = m;
    } else {
        int i = n - 1;
    }

    return k;
}

int main() {
    int T, n, m;
    cin >> T;
    while (T--)
    {
        cin >> n >> m;
        cout << MthN(n, m) << endl;
    }
}