#include <iostream>
#include <string>

using namespace std;

int main()
{
    int min_length, search;

    string S;
    cin >> S;


    search = S.find("01");
    while (search != string::npos)
    {
        S.erase(search,2);
        search = S.find("01");
    }

    search = S.find("10");
    while (search != string::npos)
    {
        S.erase(search, 2);
        search = S.find("10");
    }
    //min_length = S;
    cout << S.length() << endl;
    
    return 0;
}
