#include <iostream>

using namespace std;

int main()
{
    bool othernumbs = false;
    long long num;
    int N,num_zeros = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        othernumbs = true;
        cin >> num;
        if (num != 0)
        {
            if (i > 0)
                cout << "  ";
            cout << num;
        }
        else {
            num_zeros++;
        }
    }
    for (int i = 0; i < num_zeros; i++)
    {
        if (i > 0 || othernumbs)
            cout << "  ";
        cout << "0";
    }
    cout << endl;
    return 0;
}
