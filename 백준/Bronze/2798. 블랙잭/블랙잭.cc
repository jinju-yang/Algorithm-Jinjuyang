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
	int N, num;
	int result = 0;
	cin >> N >> num;
	vector<int> card(N);

	for (int i = 0; i < N; i++) {
		cin >> card[i];
	}
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				int sum = card[i] + card[j] + card[k];
				if (sum <= num && (num - result) > (num - sum)) {
					result = sum;
					break;
				}
			}
		}
	}
	cout << result;
	return 0;
}