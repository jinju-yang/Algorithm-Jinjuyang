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

void func(int a, int b, int n) {
    if (n == 1) {
        cout << a << ' ' << b << "\n";
        return;
    }
    func(a, 6 - a - b, n - 1);
    cout << a << ' ' << b << '\n';
    func(6 - a - b, b, n - 1);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K;
    cin >> K;
    cout << (1 << K) - 1 << "\n";
    func(1, 3, K);

    return 0;
}