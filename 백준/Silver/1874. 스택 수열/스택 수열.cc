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
using namespace std;


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    stack<int> stk;
    int count = 1;
    string sign;

    cin >> n;

    while(n--) {
        int t;
        cin >> t;
        while (count <= t) {
            stk.push(count++);
            sign += "+\n";
        }
        if (stk.top() != t) {
            cout << "NO\n";
            return 0;
        }
        stk.pop();
        sign += "-\n";

    }
    cout << sign;
}