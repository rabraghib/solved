#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Complete the hourglassSum function below.
void get_factors(int X, int A, int B, string allowed_digits) {
    int factor = X * (((A - A % X) / X) + 1);
    int facteurs_num = 0;
    int max_poss = ((B - B % X) / X) - ((A - A % X) / X);
    for (int i = 0; i < max_poss; i++)
    {
        string k = to_string(factor);
        bool is_allowed = true;

        for (int i = 0; i < k.length(); i++)
        {
            if (allowed_digits.find(k.at(i)) == string::npos) {
                is_allowed = false;
                break;
            }
        }

        if (is_allowed) {
            facteurs_num++;
        }
        factor += X;
    }
    cout << facteurs_num << endl;

}

int main()
{
    int X, A, B;
    string allowed_digits;

    cin >> X >> A >> B;
    cin >> allowed_digits;

    get_factors(X, A, B, allowed_digits);

    return 0;
}
