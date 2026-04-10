#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;
  int Y_sum = 0;
  int M_sum = 0;
  for (int i = 0; i < N; i++) {
    int time;
    cin >> time;
    Y_sum += ((time / 30) + 1) * 10;
    M_sum += ((time / 60 + 1)) * 15;
  }
  if (Y_sum == M_sum)
    cout << "Y " << "M " << Y_sum;
  else
    (Y_sum < M_sum) ? cout << "Y " << Y_sum : cout << "M " << M_sum;

  return 0;
}
