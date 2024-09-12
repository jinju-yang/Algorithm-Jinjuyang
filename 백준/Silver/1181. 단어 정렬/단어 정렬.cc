#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	vector<pair<int, string>> word(N);
	for (int i = 0; i < N; i++) {
		cin >> word[i].second;
		word[i].first = word[i].second.length();
	}

	sort(word.begin(), word.end());

	cout << word[0].second << endl;
	for (int i = 1; i < N; i++) {
		if (word[i].second != word[i - 1].second) {
			cout << word[i].second << endl;
		}
	}

	return 0;
}