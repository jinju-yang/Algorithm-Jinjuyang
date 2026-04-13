#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N;
  cin >> N;

  for (int i = 0; i < 2 * N; i++) {
    int j = 0;
    if (i < N) {
      for (; j < i + 1; j++) cout << "*";
      for (; j < 2 * N - i - 1; j++) cout << " ";
      for (; j < 2 * N; j++) cout << "*";
    } else {
      for (; j < 2 * N - i - 1; j++) cout << "*";
      for (; j < i + 1; j++) cout << " ";
      for (; j < 2 * N; j++) cout << "*";
    }
    cout << "\n";
  }

  return 0;
}
