#include <bits/stdc++.h>
using namespace std;
int N, v;
int num[202];
int main() {
  cin >> N;
  for (int i = 0; i < N; i++) {
    int temp;
    cin >> temp;
    num[temp + 100]++;
  }
  cin >> v;
  cout << num[v + 100];
  return 0;
}