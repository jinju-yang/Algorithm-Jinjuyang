#include <iostream>
using namespace std;

int min(int A, int B, int C) {
  int temp = A < B ? A : B;
  return temp < C ? temp : C;
}

int max(int A, int B, int C) {
  int temp = A > B ? A : B;
  return temp > C ? temp : C;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int A, B, C;
  cin >> A >> B >> C;

  int num1 = min(A, B, C);
  int num3 = max(A, B, C);
  int num2 = A + B + C - num1 - num3;
  cout << num1 << ' ' << num2 << ' ' << num3;
  return 0;
}