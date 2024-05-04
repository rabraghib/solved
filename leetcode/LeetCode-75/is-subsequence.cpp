#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(string s, string t) {
    int lastTIndex = 0;
    for (size_t i = 0; i < s.size(); i++) {
        bool isFound = false;
        for (size_t j = lastTIndex; j < t.size(); j++) {
            if (t[j] == s[i]) {
                lastTIndex = j + 1;
                isFound = true;
                break;
            }
        }
        if (isFound == false)
            return false;
    }
    return true;
}
