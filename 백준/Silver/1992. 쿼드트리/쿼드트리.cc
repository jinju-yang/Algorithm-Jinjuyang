#include <iostream>
using namespace std;

int N;
int video[65][65];

void quadTree(int x_st, int y_st, int cnt) {
  if (cnt == 1) {
    cout << video[x_st][y_st];
    return;
  };
  bool isZero = true, isOne = true;
  for (int i = 0; i < cnt; i++) {
    for (int j = 0; j < cnt; j++) {
      if (video[x_st + i][y_st + j])
        isZero = false;
      else
        isOne = false;
    }
  }
  if (isZero)
    cout << 0;
  else if (isOne)
    cout << 1;
  else {
    cout << "(";
    quadTree(x_st, y_st, cnt / 2);
    quadTree(x_st, y_st + cnt / 2, cnt / 2);
    quadTree(x_st + cnt / 2, y_st, cnt / 2);
    quadTree(x_st + cnt / 2, y_st + cnt / 2, cnt / 2);
    cout << ")";
  }
  return;
}

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;
  for (int i = 0; i < N; i++) {
    string str;
    cin >> str;
    for (int j = 0; j < N; j++) {
      video[i][j] = str[j] - '0';
    }
  }
  quadTree(0, 0, N);

  return 0;
}