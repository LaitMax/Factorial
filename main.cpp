#include <iostream>
using namespace std;

int main()
{
	int i, f = 1, n;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		f = f * i;
	}
	cout << f;
	return 0;
}