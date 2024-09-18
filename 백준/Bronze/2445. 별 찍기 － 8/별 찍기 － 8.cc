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

	for (int i = 1; i < (N * 2); i++) {
		if (i <= N) {
			for (int j = 1; j <= i; j++) {
				cout << "*";
			}
			for (int j = (N - i) * 2; j >= 1; j--) {
				cout << " ";
			}
			for (int j = 1; j <= i; j++) {
				cout << "*";
			}
		}
		else {
			for (int j = (i - N); j < N; j++) {
				cout << "*";
			}
			for (int j = (i - N) * 2; j >= 1; j--) {
				cout << " ";
			}
			for (int j = (i - N); j < N; j++) {
				cout << "*";
			}
		}
		cout << "\n";
	}
	return 0;
}