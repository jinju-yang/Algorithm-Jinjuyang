#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int num[1000001] = { 0 };
int sum[2000001] = { 0 };

int main(void) {
	int N, K, grade, gender;
	int count = 0; 
	int student[2][6] = { 0 };

	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> gender >> grade;
		student[gender][grade - 1]++;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 6; j++) {
			if (student[i][j] > 0) {
				if (student[i][j] % K) {
					count += student[i][j] / K + 1;
				}
				else {
					count += student[i][j] / K;
				}
			}
		}
	}

	cout << count;
	
	return 0;
}
