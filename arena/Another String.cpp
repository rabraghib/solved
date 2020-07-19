#include <iostream>

using namespace std;

int main()
{
    int T;
    string X,Y;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> X;
        Y = X.substr(1) + "" + X.at(0);
        cout << Y << endl;
    }
    return 0;
}
