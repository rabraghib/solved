#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void mincuts(vector<int> N, int n, vector<int> H, int h)
{
    int min_cuts = n;
    bool isChanged = false;

    int i = 0, j = 0;
    vector<int> Heights = H;
    while(i < n)
    {
        if (j >= n && !isChanged)
        {
            // impossible to cute that number of trees of those heights
            break;
        }else if (j >= n)
        {
            j = ++i;
            Heights = H;
        }
        else if (Heights[N[j] - 1] == 0)
        {
            j++;
            continue;
        } else
        {
            Heights[N[j] - 1]--;
            int num_cuts_case = j - i + 1;
            if (adjacent_find(Heights.begin(), Heights.end(), not_equal_to<>()) == Heights.end()
                && Heights[0] == 0 && num_cuts_case <= min_cuts)
            {
                min_cuts = num_cuts_case;
                isChanged = true;
                j = ++i;
                Heights = H;
                continue;
            }
            j++;
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
    int T, n, h;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n; cin >> h;
        vector<int> N(n), H(h);
        for (int i = 0; i < n; i++) cin >> N[i];
        for (int i = 0; i < h; i++) cin >> H[i];
        mincuts(N, n, H, h);
    }
}