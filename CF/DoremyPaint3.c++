#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int num;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            v.push_back(num);
        }

        unordered_map<int, int> m;

        for (int a : v)
        {
            m[a]++;
        }

        int l = m.size();

        if (l > 2)
        {
            cout << "No\n";
        }
        else if (l == 1)
        {
            cout << "Yes\n";
        }
        else
        {
            int a[2];
            int i = 0;
            for (auto it : m)
            {
                a[i] = it.second;
                i++;
            }

            if (a[0] + 1 == a[1])
            {
                cout << "Yes\n";
            }
            else if (a[0] == a[1] + 1)
            {
                cout << "Yes\n";
            }
            else if (a[0] == a[1])
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }

    return 0;
}