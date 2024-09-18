#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

int card[21];
int a, b;
int temp = 0;

int main(void)
{
	for (int i = 0; i < 21; i++) {
		card[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) { 
		cin >> a >> b;
		for (int j = 0; j < (b - a + 1) / 2; j++) {
			swap(card[a + j - 1], card[b - j - 1]);
		}
	}

	for (int i = 0; i < 20; i++) {
		cout << card[i] << " ";
	}
	return 0;
}