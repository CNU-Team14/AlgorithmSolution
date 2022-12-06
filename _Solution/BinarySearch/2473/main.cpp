#include <bits/stdc++.h>
using namespace std;

int a[5005], ans[3];
int n;
long long m = 3e9;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a, a+n);
    
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = -(a[i] + a[j]);
            int index = lower_bound(a, a+n, temp) - a - 1;
            
            for (int cnt = 0; cnt < 3; cnt++) {
                if (index+cnt == i || index+cnt == j) continue;
                if (index+cnt < 0) continue;
                if (index+cnt >= n) continue;
                
                if (m > abs(1LL*a[i]+a[j]+a[index+cnt])) {
                    m = abs(1LL*a[i]+a[j]+a[index+cnt]);
                    ans[0] = a[i];
                    ans[1] = a[j];
                    ans[2] = a[index+cnt];
                }
            }
        }
    }
    
    sort(ans, ans+3);
    
    cout << ans[0] << ' ' << ans[1] << ' ' << ans[2];
}