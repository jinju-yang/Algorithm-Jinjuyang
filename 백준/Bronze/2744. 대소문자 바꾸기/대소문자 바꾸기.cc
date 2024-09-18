#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int main(void)
{		
	string answer;
	cin >> answer;
	for (int i = 0; i < answer.length(); i++) {
		if (int(answer[i]) >= 65 && int(answer[i]) <= 90) {
			answer[i] = int(answer[i]) + 32;
		}
		else if (int(answer[i]) >= 97 && int(answer[i]) <= 122) {
			answer[i] = int(answer[i]) - 32;
		}
	}
	cout << answer;
	return 0;
}