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
	int A, B, V;
	int day = 1;
	int length = 0;
	cin >> A >> B >> V;
	
	day += (V - A) / (A - B);
	if ((V - A) % (A - B) != 0) {
		day++;
	}
	cout << day << endl;
	return 0;
}