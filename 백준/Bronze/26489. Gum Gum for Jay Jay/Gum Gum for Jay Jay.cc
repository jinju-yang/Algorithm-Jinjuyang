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

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int count = 0;

    while (true) {
        string gum;
        getline(cin, gum);
        if (cin.eof() == 1) break;

        count++;
    }
    cout << count;

    return 0;
}