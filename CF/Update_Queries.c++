#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<int> q(m);
        for (int i = 0; i < m; i++)
        {
            cin >> q[i];
            q[i] -= 1;
        }

        string c;
        cin >> c;
        sort(c.begin(), c.end());

        map<int, char> mp;

        for (int qu : q)
        {
            mp[qu] = '#';
        }

        int i = 0;
        for (auto it : mp)
        {
            mp[it.first] = c[i];
            i++;
        }

        for (auto it : mp)
        {
            s[it.first] = it.second;
        }

        cout << s << endl;
    }

    return 0;
}