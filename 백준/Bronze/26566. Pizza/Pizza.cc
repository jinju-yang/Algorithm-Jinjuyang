#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void) {
    int N;
    const double pi = 3.141592;
    cin >> N;
    while (N--) {
        int A1, R1, P1, P2;
        int wholeArea;
        cin >> A1 >> P1 >> R1 >> P2;
        wholeArea = R1 * R1 * pi;
        if (A1 / P1 < wholeArea / P2) {
            cout << "Whole pizza\n";
        }
        else {
            cout << "Slice of pizza\n";
        }
    }
}