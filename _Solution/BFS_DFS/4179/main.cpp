// Authored by : hji7599
// Link : http://boj.kr/5086ab7d22a242b1a515fdebdb9db703

#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};
char board[1002][1002];
int f[1002][1002];
int j_vis[1002][1002];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<pair<int, int>> q;
    int n, m;
    cin >> n >> m;
    pair<int, int> jihun;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> board[i][j];
            if(board[i][j] == 'F') {
                q.push({i, j});
                f[i][j] = 1;
            }
            if(board[i][j] == 'J') {
                jihun = {i, j};
                j_vis[i][j] = 1;
            }
        }
    }
    while(!q.empty()) {
        pair<int, int> cur = q.front(); q.pop();
        for(int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(board[nx][ny] != '.' || f[nx][ny] > 0) continue;
            f[nx][ny] = f[cur.X][cur.Y]+1;
            q.push({nx, ny});
        }
    }
    q.push(jihun);
    int ans = 0;
    while(!q.empty()) {
        pair<int, int> cur = q.front(); q.pop();
        for(int dir = 0; dir < 4; dir++) {            
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) {
                ans = j_vis[cur.X][cur.Y];
                cout << ans;
                return 0;
            }
            if(board[nx][ny] != '.' || j_vis[nx][ny] > 0) continue;
            if(j_vis[cur.X][cur.Y]+1 >= f[nx][ny] && f[nx][ny] != 0) continue;
            j_vis[nx][ny] = j_vis[cur.X][cur.Y]+1;
            q.push({nx, ny});
        }
    }

    cout << "IMPOSSIBLE";

}