#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<char> brace;
	string sentence;

	cin >> sentence;

	while (true) {
		string sentence;
		stack<char> brace;
		bool match = true;

		getline(cin, sentence);
		if (sentence == ".") break;
		
		for (auto c : sentence) {
			if (c == '(' || c == '[') brace.push(c);
			else if (c == ')') {
				if (brace.empty() || brace.top() != '(') {
					match = false;
					break;
				}
				brace.pop();
			}
			else if (c == ']') {
				if (brace.empty() || brace.top() != '[') {
					match = false;
					break;
				}
				brace.pop();
			}
		}
		if (!brace.empty()) match = false;
		if (match) cout << "yes\n";
		else cout << "no\n";
	}
}