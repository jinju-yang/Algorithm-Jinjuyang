#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;

int func(int N, int r, int c) {
    if (N == 0) return 0;
    int half = 1 << (N - 1);
    if (r < half && c < half) return func(N - 1, r, c);
    if (r < half && c >= half) return half * half + func(N - 1, r, c - half);
    if (r >= half && c < half) return 2 * half * half + func(N - 1, r - half, c);
    return 3 * half * half + func(N - 1, r - half, c - half);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, r, c;
    cin >> N >> r >> c;

    cout << func(N, r, c);

    return 0;
}