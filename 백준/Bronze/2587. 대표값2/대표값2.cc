#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int arr[5];
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    int num;
    cin >> num;
    sum += num;
    arr[i] = num;
  }
  sort(arr, arr + 5);
  cout << sum / 5 << "\n" << arr[2];

  return 0;
}