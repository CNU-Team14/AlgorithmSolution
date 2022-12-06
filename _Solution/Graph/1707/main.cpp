#include <bits/stdc++.h>
using namespace std;

vector<int> g[20005];
int k;
string ans = "YES";
int vis[20005];

void dfs(int cur, int s) {
    if (ans == "NO") return;
    for (int v : g[cur]) {
        if (vis[v] != -1) {
            if (vis[v] == s) {
                ans = "NO";
                return;
            }
            continue;
        }
        vis[v] = (s+1)%2;
        dfs(v, (s+1)%2);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> k;
    
    while (k--) {
        int v, e;
        cin >> v >> e;
        
        fill(vis, vis+v+1, -1);
        for (int i = 0; i <= v; i++)
            g[i] = {};
        ans = "YES";
        
        for (int i = 0; i < e; i++) {
            int v1, v2;
            cin >> v1 >> v2;
            g[v1].push_back(v2);
            g[v2].push_back(v1);
        }
        
        for (int i = 1; i <= v; i++) {
            if (vis[i] != -1) continue;
            vis[i] = 1;
            dfs(i, 1);
        }
        
        cout << ans << '\n';
    }
}