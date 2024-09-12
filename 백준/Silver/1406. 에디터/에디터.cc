#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void) {
	string input;
	cin >> input;

	char command, append;
	int N;
	list<char> L;
	for (auto c : input) L.push_back(c);
	auto cursor = L.end();

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == 'P') {
			cin >> append;
			L.insert(cursor, append);
		}
		else if (command == 'L') {
			if (cursor != L.begin()) {
				cursor--;
			}
		}
		else if (command == 'D') {
			if (cursor != L.end()) {
				cursor++;
			}
		}
		else {
			if (cursor != L.begin()) {
				cursor--;
				cursor = L.erase(cursor);
			}
		}
	}
	for (auto c : L) cout << c;
	return 0;
}