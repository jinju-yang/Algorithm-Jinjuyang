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
	string num;
	while (true) {
		bool palindrome = true;
		cin >> num;
		if (num == "0") {
			break;
		}
		for (int i = 0; i < num.size() / 2; i++) {
			if (num[i] != num[num.size() - i - 1]) {
				palindrome = false;
				cout << "no" << endl;
				palindrome = false;
				break;
			}
		}
		if (palindrome == true) {
			cout << "yes" << endl;
		}
	}
}