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
	int N, X, input;
	cin >> N >> X;
	for (int i = 0; i < N; i++) {
		cin >> input;
		if (input < X) {
			cout << input << " ";
		}
	}
	return 0;
}