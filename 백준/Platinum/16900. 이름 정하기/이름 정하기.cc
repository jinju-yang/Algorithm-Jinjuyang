#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
vector<int>getPartialMatch(const string& N) {
    int m = N.size();
    vector<int>pi(m, 0); 
    int begin = 1, matched = 0;
    while (begin + matched < m) {
        if (N[begin + matched] == N[matched]) {
            ++matched;
            pi[begin + matched - 1] = matched;
        }
        else {
            if (matched == 0) {
                ++begin;
            }
            else {
                begin += matched - pi[matched - 1];
                matched = pi[matched - 1];
            }
        }
    }
    return pi;
}
 
int main() {
    int k;
    string str;
    cin >> str >> k;
    vector<int>pi = getPartialMatch(str);
    int size = str.size();
    long long ans = size;
    for (int i = 1; i < k; i++) {
        ans += size - pi[size - 1];
    }
    cout << ans << "\n";
}