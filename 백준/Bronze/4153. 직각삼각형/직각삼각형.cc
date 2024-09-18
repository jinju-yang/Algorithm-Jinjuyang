#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void)
{		
	int length[3];
	while (true) {
		cin >> length[0] >> length[1] >> length[2];
		if (length[0] == 0 && length[1] == 0 && length[2] == 0) {
			return 0;
		}
		sort(length, length + 3);
		if (pow(length[0], 2) + pow(length[1], 2) == pow(length[2], 2)) {
			cout << "right\n";
		}
		else {
			cout << "wrong\n";
		}
	}
	return 0;
}