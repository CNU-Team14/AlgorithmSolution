#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
vector<pair<int, pair<int, int>>> cctv;
int ccNum[10];
int board[10][10], sim[10][10];
int n, m, ans = 100;

void re() {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            sim[i][j] = board[i][j];
}

int calc() {
    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (sim[i][j] == 0) cnt++;
    return cnt;
}

void go(int x, int y, int dir) {
    int nx = x;
    int ny = y;
    while (true) {
        nx += dx[dir];
        ny += dy[dir];
        
        if (nx >= n || nx < 0 || ny >= m || ny < 0) return;
        if (sim[nx][ny] == 6) return;
        if (sim[nx][ny] == 0) sim[nx][ny] = -1;
    }
}

void cc1(int i, int x, int y) {
    int dir = i;
    go(x, y, dir);
}

void cc2(int i, int x, int y) {
    int dir = i;
    for (dir = i; dir < 4; dir += 2) {
        go(x, y, dir);
    }
}

void cc3(int i, int x, int y) {
    int dir = i;
    int t = 2;
    while (t--) {
        go(x, y, dir);
        dir = (dir + 1) % 4;
    }
}

void cc4(int i, int x, int y) {
    int dir = i;
    int t = 3;
    while (t--) {
        go(x, y, dir);
        dir = (dir + 1) % 4;
    }
}

void cc5(int i, int x, int y) {
    int dir = i;
    int t = 4;
    while (t--) {
        go(x, y, dir);
        dir = (dir + 1) % 4;
    }
}

void back(int cnt) {
    if (cnt == cctv.size()) {
        re();
        for (int i = 0; i < cctv.size(); i++) {
            auto cur = cctv[i];
            switch (cur.X) {
                case 1:
                    cc1(ccNum[i], cur.Y.X, cur.Y.Y);
                    break;
                case 2:
                    cc2(ccNum[i], cur.Y.X, cur.Y.Y);
                    break;
                case 3:
                    cc3(ccNum[i], cur.Y.X, cur.Y.Y);
                    break;
                case 4:
                    cc4(ccNum[i], cur.Y.X, cur.Y.Y);
                    break;
                case 5:
                    cc5(ccNum[i], cur.Y.X, cur.Y.Y);
                    break;
            }
        }
        
        ans = min(ans, calc());
        return;
    }
    int end = 0;
    if (cctv[cnt].X == 2) {
        end = 2;
    } else if (cctv[cnt].X == 5) {
        end = 1;
    } else {
        end = 4;
    }
    for (int i = 0; i < end; i++) {
        ccNum[cnt] = i;
        back(cnt+1);
    }
}

int main() {
    // ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
            if (board[i][j] != 0 && board[i][j] != 6) {
                cctv.push_back({board[i][j], {i, j}});
            }
        }
    }
    
    back(0);
    
    cout << ans;
}