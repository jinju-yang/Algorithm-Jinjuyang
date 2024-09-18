#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	vector<int> num(N);
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	sort(num.begin(), num.end());

	for (int i = 0; i < N; i++) {
		cout << num[i] << "\n";
	}

	return 0;
}