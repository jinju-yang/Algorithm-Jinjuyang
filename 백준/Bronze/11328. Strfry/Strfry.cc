#include <bits/stdc++.h>
using namespace std;

int N;
int alphabet[27];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> N;
  for (int i = 0; i < N; i++) {
    int sum = 0;
    int flag = 0;
    string word;
    cin >> word;
    for (auto c : word) alphabet[c - 'a']++;
    string strfry;
    cin >> strfry;

    for (auto c : strfry) alphabet[c - 'a']--;
    for (int j = 0; j < 27; j++) {
      if (alphabet[j]) flag = 1;
      alphabet[j] = 0;
    }
    if (!flag)
      cout << "Possible\n";
    else
      cout << "Impossible\n";
  }
  return 0;
}