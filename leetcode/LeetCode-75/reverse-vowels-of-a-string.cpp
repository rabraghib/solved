#include <iostream>
#include <vector>
using namespace std;

string reverseVowels(string s) {
    string vowels = "aeiou";
    string result = s;
    int start = 0;
    int end = s.length() - 1;
    while (start < end) {
        while (start < end && vowels.find(tolower(s[start])) == string::npos)
            start++;
        while (start < end && vowels.find(tolower(s[end])) == string::npos)
            end--;
        if (start < end) {
            result[start] = s[end];
            result[end] = s[start];
            start++;
            end--;
        }
    }
    return result;
}
