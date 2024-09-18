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
	for (int i = 0; i < 3; i++) {
		int yoot;
		int result = 0;
		for (int j = 0; j < 4; j++) {
			cin >> yoot;
			result += yoot;
		}
		switch (result) {
		case 0:
			cout << "D" << endl;
			break;
		case 1:
			cout << "C" << endl;
			break;
		case 2:
			cout << "B" << endl;
			break;
		case 3: 
			cout << "A" << endl;
			break;
		case 4:
			cout << "E" << endl;
			break;
		}
	}
	return 0;
}