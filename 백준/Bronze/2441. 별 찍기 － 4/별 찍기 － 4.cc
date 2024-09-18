#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int N;

int main(void)
{
	cin >> N;
	for (int i = N; i > 0; i--) {
		for (int j = 0; j < (N - i); j++) {
			cout << " ";
		}
		for (int j = i; j > 0; j--) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}