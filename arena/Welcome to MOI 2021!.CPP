#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int T, n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        cout << (int)ceil((double)n / 3) << endl;
    }
}