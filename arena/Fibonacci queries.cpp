#include <iostream>

using namespace std;

int fibonacci(int N){
	int res;
	if (N <= 1)
		return N;
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
		cout << fibonacci(N) << endl;
	}
}
