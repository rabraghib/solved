#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void mincuts(int n, int h)
{
    vector<int> N(n), H(h);
    int min_cuts = n;
    bool isChanged = false;

    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }
    for (int i = 0; i < h; i++)
    {
        cin >> H[i];
    }
    for (int i = 0; i < n; i++)
    {
        vector<int> Heights(h);
        Heights = H;
        for (int j = i; j < n; j++)
        {
            if (Heights[N[j] - 1] > 0)
            {
                Heights[N[j] - 1]--;
            }

            int num_cuts_case = j - i + 1;
            if (adjacent_find(Heights.begin(), Heights.end(), not_equal_to<>()) == Heights.end() && Heights[0] == 0 && num_cuts_case <= min_cuts)
            {
                min_cuts = num_cuts_case;
                isChanged = true;
            }
        }
    }

    if (isChanged)
    {
        cout << min_cuts << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}

int main()
{
    int T, N, H;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        cin >> H;
        mincuts(N, H);
    }
}