#include <bits/stdc++.h>
using namespace std;

int num[10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, max = 0;
    cin >> N;
    
    string str = to_string(N);
    for (int i = 0; i < str.length(); i++)
        num[str[i] - '0']++;
    num[6] += num[9];
    if (num[6] % 2 == 1) {
        num[6]++;
    }
    num[6] /= 2;
    num[9] /= 2;
    
    for (int i = 0; i < 10; i++) {
        if (num[i] > max)
            max = num[i];
    }
    
    cout << max;
}