#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#include <stack>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void) {
	stack<int> s;
	int N;
	cin >> N;

	while (N--) {
		string cmd;
		cin >> cmd;

		if (cmd == "push") {
			int X;
			cin >> X;

			s.push(X);
		}

		else if (cmd == "pop") {
			if (s.size()) {
				cout << s.top() << "\n";
				s.pop();
			}
			else cout << -1 << "\n";
		}
		else if (cmd == "size") cout << s.size() << "\n";
		else if (cmd == "empty") {
			if (s.empty()) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (cmd == "top") {
			if (s.size()) cout << s.top() << "\n";
			else cout << -1 << "\n";
		}
	}
}