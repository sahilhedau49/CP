#include <bits/stdc++.h>
using namespace std;

bool isGood(string s)
{
    int l = s.length();
    for (int i = 1; i < l; i++)
    {
        if (s[i - 1] == s[i])
            return false;
    }
    return true;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s;
        cin >> t;

        if (isGood(s))
        {
            cout << "Yes\n";
        }
        else
        {
            if (t.length() % 2 == 0)
            {
                cout << "No\n";
            }
            else
            {
                if (isGood(t))
                {
                    if (t[0] == '1')
                    {
                        int flag = 0;
                        for (int i = 1; i < n; i++)
                        {
                            if (s[i] == '1' && s[i - 1] == '1')
                            {
                                cout << "No\n";
                                flag = 1;
                                break;
                            }
                        }
                        if (flag == 0)
                        {
                            cout << "Yes\n";
                        }
                    }
                    else
                    {
                        int flag = 0;
                        for (int i = 1; i < n; i++)
                        {
                            if (s[i] == '0' && s[i - 1] == '0')
                            {
                                cout << "No\n";
                                flag = 1;
                                break;
                            }
                        }
                        if (flag == 0)
                        {
                            cout << "Yes\n";
                        }
                    }
                }
                else
                {
                    cout << "No\n";
                }
            }
        }
    }

    return 0;
}