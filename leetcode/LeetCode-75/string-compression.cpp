#include <iostream>
#include <string>
#include <vector>

using namespace std;

int compress(vector<char>& chars) {
    unsigned int i = 0;
    unsigned int groupLength;
    unsigned int currIndex = 0;
    while (i < chars.size()) {
        chars[currIndex] = chars[i];
        groupLength = 1;
        while (i < chars.size() - 1 && chars[i + 1] == chars[i]) {
            groupLength++;
            i++;
        }
        currIndex++;
        if (groupLength != 1) {
            string groupLengthStr = to_string(groupLength);
            for (size_t j = 0; j < groupLengthStr.size(); j++) {
                chars[currIndex++] = groupLengthStr[j];
            }
        }
        i++;
    }
    return currIndex;
}
