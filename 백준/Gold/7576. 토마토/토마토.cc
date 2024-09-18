#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#define X first
#define Y second
using namespace std;

int N, M;
int day = 0;
bool entire = true;
int board[1002][1002];
int dist[1002][1002];
queue< pair<int, int> > tomato;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> M >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) cin >> board[i][j];
	}
	for (int i = 0; i < N; i++) fill(dist[i], dist[i] + M, 0);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			dist[i][j] = board[i][j];
			if (board[i][j] == 1) tomato.push({ i, j });
		}			
	}

	while (!tomato.empty()) {
		pair<int, int> cur = tomato.front(); tomato.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) {
				continue; //범위 외 좌표
			}
			if (board[nx][ny] != 0 || dist[nx][ny]) {
				continue;
				//문제 조건 
			}
			if (dist[cur.X][cur.Y] + 1 > dist[nx][ny]) {
				dist[nx][ny] = dist[cur.X][cur.Y] + 1;
				tomato.push({ nx, ny });
			}
			if (dist[nx][ny] > day) day = dist[nx][ny];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (!dist[i][j]) {
				entire = false;
			}
		}
	}
	if (entire) {
		if (day) cout << --day;
		else cout << day;
	}
	else cout << -1;

	return 0;
}