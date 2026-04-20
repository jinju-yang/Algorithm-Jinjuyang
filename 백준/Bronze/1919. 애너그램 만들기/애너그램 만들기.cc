#include <bits/stdc++.h>
using namespace std;

int alphabet[27];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string word_1, word_2;
  int sum = 0;
  cin >> word_1;
  for (auto c : word_1) alphabet[c - 'a']++;
  cin >> word_2;
  for (auto c : word_2) alphabet[c - 'a']--;

  for (int i = 0; i < 26; i++) {
    if (alphabet[i] > 0)
      sum += alphabet[i];
    else
      sum -= alphabet[i];
  }

  cout << sum;

  return 0;
}