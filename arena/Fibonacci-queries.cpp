#include <iostream>
#include <vector>

using namespace std;

int fibonacci(int N, vector<int> *memory)
{
	int res;
	if (N <= 1)
		return N;
	if (!memory->at(N))
	{
		res = (fibonacci(N - 1, memory) + fibonacci(N - 2, memory)) % 1000000007;
		memory->at(N) = res;
	}
	return memory->at(N);
}

int main()
{
	int Q, N;
	vector<int> memory(10000000);
	cin >> Q;
	for (int i = 0; i < Q; i++)
	{
		cin >> N;
		cout << fibonacci(N, &memory) << endl;
	}
}
