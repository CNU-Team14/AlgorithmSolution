#include <bits/stdc++.h>
using namespace std;

int d[1005][1005];
string str1, str2;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> str1 >> str2;
    
    for (int i = 0; i <= str1.length(); i++) {
        for (int j = 0; j <= str2.length(); j++) {
            if (i == 0 || j == 0) continue;
            else if (str1[i-1] == str2[j-1])
                d[i][j] = d[i-1][j-1] + 1;
            else d[i][j] = max(d[i-1][j], d[i][j-1]);
        }
    }
    
    cout << d[str1.length()][str2.length()];
}