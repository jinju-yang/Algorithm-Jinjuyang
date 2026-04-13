#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N;
  cin >> N;

  for (int i = 0; i < 2 * N - 1; i++) {
    int j = 0;
    if (i < N) {
      for (; j < N - i - 1; j++) cout << " ";
      for (; j < N + i; j++) cout << "*";
    } else {
      for (; j < i - N + 1; j++) cout << " ";
      for (; j < 3 * N - i - 2; j++) cout << "*";
    }
    cout << "\n";
  }

  return 0;
}
