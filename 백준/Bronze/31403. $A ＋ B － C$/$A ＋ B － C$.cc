#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;


int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	string st = to_string(a) + to_string(b);

	cout << a + b - c << "\n";
	cout << stoi(st) - c;

	return 0;
}