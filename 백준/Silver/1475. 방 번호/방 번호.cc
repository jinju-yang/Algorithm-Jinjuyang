#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void) {
	int i_num;
	string num;
	int set[10] = { 0 };
	int max = 0;

	cin >> num;

	for (int i = 0; i < num.length(); i++) {
		set[num[i] - '0']++;
	}

	double reverse = (set[9] + set[6]) / 2.;

	set[9] = round(reverse);
	set[6] = 0;

	for (int i = 0; i < 10; i++) {
		if (max < set[i]) {
			max = set[i];
		}
	}

	cout << max;

	return 0;
}
