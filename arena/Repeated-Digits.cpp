#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, a;
    cin >> N;
    int x = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        x ^= a;
    }
    cout << x << endl;
}