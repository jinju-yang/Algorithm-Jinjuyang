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
	long num[2];
	for (int i = 0; i < 2; i++) {
		cin >> num[i];
	}
	sort(num, num + 2);

	if (num[0] == num[1]) {
		cout << 0;
	}
	else {
		cout << num[1] - num[0] - 1 << endl;
		for (int i = 1; i < num[1] - num[0]; i++) {
			cout << num[0] + i << " ";
		}
	}
	
	return 0;
}