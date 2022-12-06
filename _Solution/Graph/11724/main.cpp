#include <bits/stdc++.h>
using namespace std;

vector<int> g[1005];
queue<int> q;
bool visited[1005] = {false, };
int n, m, ans;

void bfs() {
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        
        for (auto i : g[cur]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            ans++;
            q.push(i);
            visited[i] = true;
            bfs();
        }
    }
    
    cout << ans;
}