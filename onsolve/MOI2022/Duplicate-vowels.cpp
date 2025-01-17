#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch) {
    return (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u');
}
bool isConsonant(char ch) { return !isVowel(ch) && isalpha(ch); }

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        string result = "";
        getline(cin >> ws, s);
        result += s[0];
        for (size_t i = 1; i < (s.length() - 1); i++) {
            result += s[i];
            if (isVowel(s[i]) && isConsonant(s[i - 1]) && isConsonant(s[i + 1])) {
                result += s[i];
                result += s[i + 1];
                i++;
            }
        }
        result += s[s.length() - 1];
        cout << result << endl;
    }
}