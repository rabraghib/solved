#include <iostream>
#include <vector>

using namespace std;


int main()
{
    // vars
	int N, k, b;
    int sum = 0;
    cin >> N >> k;
    vector<vector<int>> array(N);

    // get all input values
    for (int i = 0; i < N; i++)
    {
        cin >> b;
        array[i] = vector<int>(b);
        for (int j = 0; j < b; j++)
        {
            cin >> array[i][j];
        }
    }
    
    // pick items
    for (int i = 0; i < k; i++)
    {
        int min = array[0][0];
        int in_arr = 0;
        for (int i = 0; i < N; i++)
        {
            if (array[i][0] < min)
            {
                min = array[i][0];
                in_arr = i;
            }
        }
        sum += min;
        array[in_arr].erase(array[in_arr].begin());
    }
    cout << sum << endl;
}