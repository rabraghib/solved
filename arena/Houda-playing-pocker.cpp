#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N, best_amounts = 0, amounts_curent = 0;
        cin >> N;
        vector<int> amounts(N);

        for (int i = 0; i < N; i++)
        {
            cin >> amounts[i];
            amounts_curent += amounts[i];

            if (amounts_curent < 0)
                amounts_curent = 0;

            if (amounts_curent > best_amounts)
                best_amounts = amounts_curent;
        }
        if (best_amounts > 0)
            cout << best_amounts << endl;
        else
            cout << "better luck next year" << endl;
    }
}
