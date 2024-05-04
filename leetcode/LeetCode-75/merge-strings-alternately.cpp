#include <iostream>
#include <string>
using namespace std;

string mergeAlternately(string word1, string word2) {
    string result;
    size_t max = word1.length() > word2.length() ? word1.length() : word2.length();
    for (size_t i = 0; i < max; i++) {
        if (i < word1.length())
            result += word1[i];
        if (i < word2.length())
            result += word2[i];
    }
    return result;
}
