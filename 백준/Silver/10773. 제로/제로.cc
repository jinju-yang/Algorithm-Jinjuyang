#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#include <stack>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void) {
	int K;
	int sum = 0;
	stack<int> account;

	cin >> K;
	while (K--) {
		int num;
		cin >> num;
		if (num == 0) account.pop();
		else account.push(num);
	}

	while(account.size()) {
		sum += account.top();
		account.pop();
	}

	cout << sum;
	return 0;
}