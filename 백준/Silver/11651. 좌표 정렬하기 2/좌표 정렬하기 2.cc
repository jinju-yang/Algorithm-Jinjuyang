#include <iostream>
#include <vector>
using namespace std;

int N;
vector<pair<int, int>> arr;
vector<pair<int, int>> temp;

void merge(int st, int en) {
  int mid = (en + st) / 2;
  int lidx = st;
  int ridx = mid;
  for(int i = st; i < en; i++) {
    if(lidx == mid) temp[i] = arr[ridx++];
    else if(ridx == en) temp[i] = arr[lidx++];
    else if(arr[lidx].second < arr[ridx].second) temp[i] = arr[lidx++];
    else if(arr[lidx].second > arr[ridx].second) temp[i] = arr[ridx++];
    else {
      if(arr[lidx].first < arr[ridx].first) temp[i] = arr[lidx++];
      else temp[i] = arr[ridx++];
    }
  }
  for(int i = st; i < en; i++) arr[i] = temp[i];
}

void merge_sort(int st, int en) {
  if(en == st + 1) return;
  int mid = (en + st) / 2;
  merge_sort(st, mid);
  merge_sort(mid, en);
  merge(st, en);
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> N;
  arr.resize(N);
  temp.resize(N);

  for(int i = 0; i < N; i++) {
    cin >> arr[i].first >> arr[i].second;
  }

  merge_sort(0, N);
  for(int i = 0; i < N; i++) cout << arr[i].first << " " << arr[i].second << "\n";
}