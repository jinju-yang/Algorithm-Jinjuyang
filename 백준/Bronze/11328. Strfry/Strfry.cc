#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;


int main(void) {
	string first, second;
	int N;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int count = 0;
		int word[2][26] = { 0 };
		cin >> first >> second;

		for (int j = 0; j < first.length(); j++) {
			word[0][(int)first[j] - 'a']++;
		}

		for (int j = 0; j < second.length(); j++) {
			word[1][second[j] - 'a']++;
		}

		for (int j = 0; j < 26; j++) {
			count += abs(word[0][j] - word[1][j]);
		}

		if (count) {
			cout << "Impossible " << "\n";
		}
		else {
			cout << "Possible" << "\n";
		}
	}
	return 0;
}