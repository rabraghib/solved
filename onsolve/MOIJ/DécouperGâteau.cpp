#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T, N, M, K;
    cin >> T;
    while (T--) {
        cin >> N >> M >> K;
        int items_num = M * N;
        vector<int> C(items_num);
        int min_tot = 0;
        for (int i = 0; i < items_num; i++) {
            cin >> C[i];
        }
        sort(C.begin(), C.end());
        for (int i = 0; i < (int)(items_num / K); i += K) {
            int aport;

            for (int j = i; j < (i + K); j++) {
                aport += C[j];
            }
            aport = aport / K;
            min_tot += aport;
        }
        cout << min_tot << endl;
    }
}