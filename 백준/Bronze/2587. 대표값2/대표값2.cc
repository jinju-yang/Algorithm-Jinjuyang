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
	int num[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}

	sort(num, num + 5);

	for (int i = 0; i < 5; i++) {
		sum += num[i];
	}

	cout << int(sum / 5) << endl << num[2];
	return 0;
}