#include <bits/stdc++.h>
using namespace std;

int num[10];
int max_num = 0;

int main() {
  int room_num;
  cin >> room_num;
  while (room_num > 0) {
    num[room_num % 10]++;
    room_num /= 10;
  }
  int overlap = (num[6] + num[9] + 1) / 2;
  num[6] = overlap;
  num[9] = overlap;

  for (int i = 0; i < 10; i++) max_num = max(num[i], max_num);

  cout << max_num;
  return 0;
}