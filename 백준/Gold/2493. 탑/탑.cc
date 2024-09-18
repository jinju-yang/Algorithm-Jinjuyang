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

    int N;
    stack < pair<int, int>> tower;

    cin >> N;
    tower.push({ 1000000001, 0 });

    for (int i = 1; i <= N; i++) {
        int height;
        cin >> height;
        while (tower.top().first < height) tower.pop();
        cout << tower.top().second << " ";
        tower.push({ height, i });
    }
    cout << "\n";
}