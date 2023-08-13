#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    size_t N;
    unordered_map<string, int> foldersChildrenNumber;
    cin >> N;
    for (size_t i = 0; i < N; i++) {
        string path;
        cin >> path;
        size_t found = path.find_last_of("/");
        while (found != string::npos) {
            path = path.substr(0, found);
            if (foldersChildrenNumber[path]) {
                foldersChildrenNumber[path] += 1;
                break;
            } else {
                foldersChildrenNumber[path] = 1;
            }

            found = path.find_last_of("/");
        }
    }
    string maxKey = "root";
    for (auto item : foldersChildrenNumber) {
        if (item.second > foldersChildrenNumber[maxKey] || (item.second == foldersChildrenNumber[maxKey] && item.first.length() < maxKey.length())) {
            maxKey = item.first;
        }
    }
    cout << maxKey << " : " << foldersChildrenNumber[maxKey] << endl;
}
