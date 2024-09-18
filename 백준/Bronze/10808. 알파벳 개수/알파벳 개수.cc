#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void) {
	string word;
	int alphabet[26] = { 0 };

	cin >> word;

	for (int i = 0; i < word.length(); i++) {
		alphabet[word[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << " ";
	}

	return 0;
}