#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int people(int k, int n) {
	if (n == 1) {
		return 1;
	}
	if (k == 0) {
		return n;
	}
	return (people(k - 1, n) + people(k, n - 1));
}

int main(void)
{
	int testCase;
	int k, n;
	cin >> testCase;
	for (int i = 0; i < testCase; i++) {
		cin >> k >> n;
		cout << people(k, n) << endl;
	}
	return 0;
}