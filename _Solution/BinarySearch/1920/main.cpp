#include <bits/stdc++.h>
using namespace std;

int a[100005];
int n, m;

int bS(int s, int e, int target) {
    int start, end, mid;
    start = s;
    end = e;
    
    while (start <= end) {
        mid = (start + end) / 2;
        if (a[mid] < target)
            start = mid + 1;
        else if (a[mid] > target)
            end = mid - 1;
        else
            return 1;
    }

    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a+n);
    
    cin >> m;

    while (m--) {
        int target;
        cin >> target;

        cout << bS(0, n-1, target) << '\n';
    }
}