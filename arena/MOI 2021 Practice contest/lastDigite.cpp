#include <iostream>

using namespace std;

int lastdigitFactorial(int n) {
    if (n == 0) return 1; 
    else if (n <= 2) return n; 
    else if (n == 3) return 6; 
    else if (n == 4) return 4; 
    return 0;
}

int main()
{
	int T, n;
	cin >> T;
	while (T--)
	{
		cin >> n;
        cout << lastdigitFactorial(n) << endl;
    }
}