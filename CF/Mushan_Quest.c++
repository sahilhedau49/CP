#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n > 26)
    {
        cout << -1;
        return 0;
    }

    unordered_map<char, int> m;

    for (char c : s)
    {
        m[c]++;
    }

    int ans = 0;
    for (auto it : m)
    {
        ans += it.second - 1;
    }

    cout << ans;

    return 0;
}