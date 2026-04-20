#include <bits/stdc++.h>
using namespace std;

int num[10];

int main() {
  int A, B, C;
  cin >> A;
  cin >> B;
  cin >> C;

  int result = A * B * C;

  for (auto c : to_string(result)) num[int(c) - '0']++;
  for (int i = 0; i < 10; i++) cout << num[i] << "\n";
  return 0;
}