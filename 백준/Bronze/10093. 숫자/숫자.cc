#include <iostream>

using namespace std;

long long max(long long A, long long B) { return (A >= B) ? A : B; }

long long min(long long A, long long B) { return (A <= B) ? A : B; }

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long A, B;
  cin >> A >> B;
  (A == B) ? cout << 0 : cout << max(A, B) - min(A, B) - 1 << "\n";
  for (long long i = min(A, B) + 1; i < max(A, B); i++) cout << i << " ";

  return 0;
}

