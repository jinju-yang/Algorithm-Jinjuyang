#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#define X first
#define Y second
using namespace std;

int N;

int fibonacci(int N) {
    if (N == 0) {
        return 0;
    }
    else if (N == 1) {
        return 1;
    }
    return fibonacci(N - 1) + fibonacci(N - 2);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    cout << fibonacci(N);
}