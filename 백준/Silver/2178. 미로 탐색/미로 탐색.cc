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
string board[102];
int dist[102][102];
queue< pair<int, int> > maze;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++) cin >> board[i];
	for (int i = 0; i < N; i++) fill(dist[i], dist[i] + M, -1);

	maze.push({ 0, 0 });
	dist[0][0] = 0;

	while (!maze.empty()) {
		pair<int, int> cur = maze.front(); maze.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (dist[nx][ny] >= 0 || board[nx][ny] != '1') continue;
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			maze.push({ nx, ny });
		}
	}
	cout << dist[N - 1][M - 1] + 1;

	return 0;
}