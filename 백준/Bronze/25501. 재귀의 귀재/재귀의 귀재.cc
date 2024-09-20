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

int T, cnt;
char S[1001];

int recursion(const char* s, int l, int r) {
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //printf("ABBA: %d\n", isPalindrome("ABBA")); // 1
    //printf("ABC: %d\n", isPalindrome("ABC"));   // 0
    cin >> T;
    while (T--) {
        cin >> S;
        cout << isPalindrome(S) << " ";
        cout << cnt << "\n";
        cnt = 0;
    }
}