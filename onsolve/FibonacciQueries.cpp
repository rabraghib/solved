#include <iostream>

using namespace std;

int fibonacci(int N){
	int res;
	if (N <= 2)
		return 1;
	res = (fibonacci(N - 1) + fibonacci(N - 2)) % 1000000007;
    return res;
}

int main()
{
	int Q, N;
	cin >> Q;
	for (int i = 0; i < Q; i++)
	{
		cin >> N;
        if (N < 30)
        {
		    cout << fibonacci(N) << endl;
        }
        else
        {
		    cout << N << endl;
        }
        
	}
}