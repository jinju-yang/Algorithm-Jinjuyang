#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void) {
	int N;
	int lifeScore;
	string life;

	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		lifeScore = 0;
		getline(cin, life);
		for (int j = 0; j < life.length(); j++) {
			if (life[j] == ' ') continue;
			lifeScore += life[j] - 'A' + 1;
		}
		if (lifeScore == 100) {
			cout << "PERFECT LIFE" << "\n";
		}
		else {
			cout << lifeScore << "\n";
		}
	}
	return 0;
}