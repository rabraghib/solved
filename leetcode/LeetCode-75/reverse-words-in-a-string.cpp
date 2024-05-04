#include <iostream>
#include <vector>
using namespace std;

string reverseWords(string s) {
    string result;
    vector<string> words;
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == ' ')
            continue;
        string word;
        while (i < s.size() && s[i] != ' ') {
            word += s[i];
            i++;
        }
        words.emplace_back(word);
    }
    for (int i = words.size() - 1; i >= 0; i--) {
        result += words[i];
        if (i != 0)
            result += ' ';
    }
    return result;
}
