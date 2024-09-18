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
    string code, subject;
    int N;
    int count = 0;

    cin >> code;
    cin >> N;

    while (N--) {
        int flag = 5;
        cin >> subject;

        for (int i = 0; i < 5; i++) {
            if (code[i] == subject[i]) {
                flag--;
            }
        }
        if (!flag) {
            count++;
        }
    }

    cout << count;
}