// Authored by : hji7599
// Link : http://boj.kr/9669ac8d4828438d83ae65477d8b904d

#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int box[1002][1002];
int dist[1002][1002];
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<pair<int, int>> q;
    int m, n;
    cin >> m >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> box[i][j];
            if(box[i][j] == 1) {
                q.push({i,j});
            }
            if(box[i][j] == 0) {
                dist[i][j] = -1;
            }
        }
    }

    while(!q.empty()){
        pair<int, int> cur = q.front(); q.pop();
        for(int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(dist[nx][ny] >= 0) continue;
            dist[nx][ny] = dist[cur.X][cur.Y]+1;
            q.push({nx, ny});
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(dist[i][j] == -1) {
                cout << -1;
                return 0;
            }
            ans = max(ans, dist[i][j]);
        }
    }
    cout << ans;
    
}