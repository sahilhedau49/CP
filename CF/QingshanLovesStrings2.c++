#include <bits/stdc++.h>
using namespace std;

bool isGood(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        if (s[i] == s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int k = 300;
        int flag = 0;
        while (k--)
        {
            int i = 0, j = n - 1;
            while (i < j)
            {
                if (s[i] == s[j])
                {
                    s += "01";
                    i = 0;
                    j = n + 1;
                }
                if (isGood(s))
                {
                    cout << "Yes\n";
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "No\n";
            }
        }
    }

    return 0;
}