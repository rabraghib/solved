#include <iostream> 
using namespace std;

int num_paths(int m, int n)
{
    if (m == 1 || n == 1)
        return 1;

    return (num_paths(m - 1, n) + num_paths(m, n - 1))% 1000000007;
}

int main()
{
    int T, m, n;
    cin >> T;
    while (T--)
    {
        cin >> m >> n;
        cout << num_paths(m, n) << endl;
    }
}
