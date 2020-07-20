#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int num, last_digit,ret;
        cin >> num;
        ret = 1;
        if (num <= 4)
        {
            for (int i = num; i > 0; i--)
            {
                ret *= i;
            }
            last_digit = ret % 10;
            cout << last_digit << endl;
        }
        else {
            cout << "0" << endl;
        }
    }
}
