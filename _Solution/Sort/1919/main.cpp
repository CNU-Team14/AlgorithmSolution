#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string str1, str2;
    int result = 0;
    int arr_str1[26] = { }, arr_str2[26] = { };
    
    cin >> str1 >> str2;
    
    for (auto c : str1) arr_str1[c - 'a']++;
    for (auto c : str2) arr_str2[c - 'a']++;
    
    for (int i = 0; i < 26; i++)
        result += abs(arr_str1[i] - arr_str2[i]);
    
    cout << result;
}