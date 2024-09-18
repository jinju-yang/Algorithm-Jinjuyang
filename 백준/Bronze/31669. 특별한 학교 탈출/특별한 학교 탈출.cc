#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void) {
	int N, M, lesson;
	int escape = 0;
	bool success = false;
	string teacher;
	cin >> N >> M;
	vector<vector<string>> school(N, vector<string>(M, "X"));

	for (int i = 0; i < N; i++) {
		cin >> teacher;
		for (int j = 0; j < M; j++) {
			school[i][j] = teacher[j];
		}
	}

	for (int j = 0; j < M; j++) {
		escape = 0;
		for (int i = 0; i < N; i++) {
			if (school[i][j] == "O") break;
			else escape++;
		}
		if (escape == N) {
			lesson = j + 1;
			success = true;
			break;
		}
		else success = false;
	}

	if (success) {
		cout << lesson << "\n";
	}
	else {
		cout << "ESCAPE FAILED" << "\n";
	}

	return 0;
}