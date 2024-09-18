#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void) {
	int N, X;
	string cmd;
	queue<int> q;
	cin >> N;
	while (N--) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> X;
			q.push(X);
		}
		else if (cmd == "pop") {
			if (q.size()) {
				cout << q.front() << "\n";
				q.pop();
			}
			else cout << -1 << "\n";
		}
		else if (cmd == "size") cout << q.size() << "\n";
		else if (cmd == "empty") {
			if (q.empty()) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (cmd == "front") {
			if (q.size()) cout << q.front() << "\n";
			else cout << -1 << "\n";
		}
		else if (cmd == "back") {
			if (q.size()) cout << q.back() << "\n";
			else cout << -1 << "\n";
		}
	}
}