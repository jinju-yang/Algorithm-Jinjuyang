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

long long A, B, C;
long long POW(int A, int B, int C) {
    if (B == 0) return 1;
    long long temp = POW(A, B / 2, C);
    temp = temp * temp % C;
    if (B % 2 == 0) return temp;
    else return temp * A % C;

}

int main(void) {
    cin >> A >> B >> C;
    cout << POW(A, B, C);
    return 0;
}