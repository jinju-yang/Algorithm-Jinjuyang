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
	int count = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		int divisor = 0;

		for (int div = 1; div <= num; div++) {
			if (num % div == 0) {
				divisor++;
			}
		}
		if (divisor == 2) {
			count = count + 1;
		}
	}
	cout << count;
	return 0;
}