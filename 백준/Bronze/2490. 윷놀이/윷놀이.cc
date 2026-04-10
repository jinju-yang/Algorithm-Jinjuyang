#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int A, B, C, D;

  for (int i = 0; i < 3; i++) {
    cin >> A >> B >> C >> D;
    int sum = A + B + C + D;
    cout << "DCBAE"[sum] << "\n";
  }

  return 0;
}