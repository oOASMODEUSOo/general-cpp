#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char first, char second, char third)
{
	if (n == 0) {
		return;
	}
	towerOfHanoi(n - 1, first, third, second);
	cout << "Move disk " << n << " from rod " << first << " to rod " << second << endl;
	towerOfHanoi(n - 1, third, second, first);
}

int main()
{
	int N = 3;

	towerOfHanoi(N, 'A', 'C', 'B');
	return 0;
}