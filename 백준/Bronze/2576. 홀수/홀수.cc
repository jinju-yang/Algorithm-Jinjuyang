#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int num;
  int sum = 0;
  int min = 100;

  for (int i = 0; i < 7; i++) {
    cin >> num;
    sum = (num % 2 != 0) ? sum + num : sum;
    min = (num % 2 != 0 && min > num) ? num : min;
  }
  (sum == 0) ? cout << -1 : cout << sum << "\n" << min;

  return 0;
}