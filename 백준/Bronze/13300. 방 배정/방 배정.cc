#include <bits/stdc++.h>
using namespace std;

int students[2][7];
int N, K;
int min_room = 0;
int main() {
  cin >> N;
  cin >> K;
  for (int i = 0; i < N; i++) {
    int gender, grade;
    cin >> gender;
    cin >> grade;
    students[gender][grade]++;
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 7; j++) {
      if (students[i][j] > 0) min_room += (students[i][j] + K - 1) / K;
    }
  }

  cout << min_room;
  return 0;
}