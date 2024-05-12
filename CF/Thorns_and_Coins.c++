#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int count = 0;
        int i = 0;
        while (i < n)
        {
            if (str[i + 1] != '*')
            {
                if (str[i + 1] == '@')
                    count++;
                i++;
            }
            else
            {
                if (str[i + 2] != '*')
                {
                    if (str[i + 2] == '@')
                        count++;
                    i += 2;
                }
                else
                {
                    break;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}