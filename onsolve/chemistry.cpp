#include <iostream>
#include <vector>
using namespace std;

int main() {
    int X, N, T;
    cin >> T;
    while (T--) {
        int maxGoldMoles = 0;
        bool breakOut = false;
        vector<vector<int>> data;
        cin >> X >> N;
        for (int i = 0; i < N; i++) {
            int tempVar1, tempVar2, tempVar3;
            vector<int> temp;
            cin >> tempVar1 >> tempVar2 >> tempVar3;
            temp.push_back(tempVar1);
            temp.push_back(tempVar2);
            temp.push_back(tempVar3);
            data.push_back(temp);
        }
        while (true) {
            for (size_t i = 0; i < N; i++) {
                int def = data[i][1] - data[i][0];
                int defPrice = X - def * -1 * data[i][2];
                if (def >= 0) {
                    data[i][1] = def;
                } else if (defPrice >= 0) {
                    data[i][1] = 0;
                    X = defPrice;
                } else {
                    breakOut = true;
                    break;
                }
            }
            if (breakOut)
                break;
            maxGoldMoles++;
        }
        cout << maxGoldMoles << endl;
    }
}