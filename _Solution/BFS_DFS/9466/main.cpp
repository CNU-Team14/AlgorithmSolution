// Authored by : hji7599
// Link : http://boj.kr/4940d4de9f9245bf89d49fd7a1f4ccf7

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n + 1];
        int vis[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            vis[i] = 0;
        }
        // for문을 돌면서 bfs를 돌린다. 단, 이미 방문한 곳은 bfs의 시작점이 되지 않는다.
        stack<int> s;
        int cnt = 0;
        for (int j = 1; j <= n; j++) {
            vector<int> v;
            if (vis[j] >= 1)
                continue;
            vis[j] = 1;
            s.push(j);
            v.push_back(j);
            // 방문중인 모든 원소들을 벡터에 저장한다.
            while (!s.empty()) {
                auto cur = s.top();
                s.pop();
                int next = arr[cur];
                // vis배열의 값이 0보다 크면 벡터에 원소가 있는지 확인한다.
                // 원소가 있다면 사이클인것이고, 없다면 사이클이 아니다.
                if (vis[next] > 0) {
                    for (int i = 0; i < v.size(); i++) {
                        if (v[i] == next) {
                            cnt = cnt + (v.size() - i);
                        }
                    }
                }
                else {
                    vis[next] = 1;
                    s.push(next);
                    v.push_back(next);
                }
            }
        }
        cout << n - cnt << '\n';
   }
}