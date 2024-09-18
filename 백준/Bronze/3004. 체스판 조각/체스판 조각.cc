#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void) {
	int N, result;
	cin >> N;
	if (N % 2) {
		result = ((N / 2) + 2) * ((N / 2) + 1);
	}
	else {
		result = pow((N / 2) + 1, 2);
	}
	cout << result;
	return 0;
}