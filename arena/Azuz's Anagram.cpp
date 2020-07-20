#include <iostream>
#include <string>

using namespace std;

bool com_chars(string first, string sacond) {
    for (int i = 1; i < first.length(); i++)
    {
        char alf = first.at(i);
        first[i] = ' ';
        size_t found = sacond.find(alf);
        if (found == string::npos)
            return false;
        sacond[found] = ' ';
    }
    return true;
}

int main()
{
    int T;
    string origine, sacond;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> origine >> sacond;
        int last_i_origin = origine.length() - 1;
        int last_i_sacond = sacond.length() - 1;

        bool result = com_chars(origine, sacond);

        if (!result || origine.length() != sacond.length() ||
            origine.at(0) != sacond.at(0) ||  origine.at(last_i_origin) != sacond.at(last_i_sacond))
        {
            cout << "Azuz is not my leader" << endl;
            continue;
        }
        cout << "Awesome anagram" << endl;
    }
    return 0;
}
