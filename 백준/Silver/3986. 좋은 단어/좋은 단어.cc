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

int N;
int sum = 0;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string word;

	cin >> N;

	while (N--) {
		stack<char> alphabet;
		cin >> word;
		for (int i = 0; i < word.length(); i++) {
			if (!alphabet.empty() && word[i] == alphabet.top()) {
				alphabet.pop();
			}
			else alphabet.push(word[i]);
		}
		if (alphabet.empty()) sum++;
	}
	cout << sum;
}