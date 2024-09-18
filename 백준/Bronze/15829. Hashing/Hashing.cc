#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define fio ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;

string s;
int main(void)
{
	int l;
	long long M = 1234567891;
	long long r = 1;
	long long sum = 0;
	cin >> l;
	cin >> s;
	for (int i = 0; i < l; i++)
	{
		sum += ((long(s[i]) - 96) * r) % M;
		r = (r * 31) % M;
	}
	cout << sum % M;
}