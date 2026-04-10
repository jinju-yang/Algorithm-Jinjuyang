#include <iostream>
using namespace std;

int max(int A, int B, int C) {
  int temp = A > B ? A : B;
  return temp > C ? temp : C;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int A, B, C, prize;
  cin >> A >> B >> C;

  if (A == B && B == C)
    prize = 10000 + A * 1000;
  else if (A == B || A == C || B == C) {
    int same = (B == C) ? B : A;
    prize = 1000 + same * 100;
  } else
    prize = max(A, B, C) * 100;

  cout << prize;
  return 0;
}