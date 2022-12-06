#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

using pii = pair<int, int>;

vector<pii> g[20005];
int d[20005];
int v, e, s;
priority_queue<pii, vector<pii>, greater<pii>> pq;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> v >> e >> s;
    
    for (int i = 0; i < e; i++) {
        int v1, v2, w;
        cin >> v1 >> v2 >> w;
        g[v1].push_back({w, v2});
    }
    
    fill(d, d+v+1, INT_MAX);
    d[s] = 0;
    
    pq.push({d[s], s});
    
    while (!pq.empty()) {
        auto cur = pq.top();
        pq.pop();
        
        if (d[cur.Y] != cur.X) continue;
        for (auto nxt : g[cur.Y]) {
            if (d[nxt.Y] <= d[cur.Y] + nxt.X) continue;
            d[nxt.Y] = d[cur.Y] + nxt.X;
            pq.push({d[nxt.Y], nxt.Y});
        }
    }
    
    for (int i = 1; i <= v; i++) {
        if (d[i] == INT_MAX) cout << "INF\n";
        else cout << d[i] << '\n';
    }
}