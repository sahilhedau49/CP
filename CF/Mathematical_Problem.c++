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
        string s;
        cin >> s;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = s[i] - '0';
        }

        int ans = INT_MAX;

        for (int i = 1; i < n; i++)
        {
            int res = arr[i - 1] * 10 + arr[i];

            for (int j = 0; j < n; j++)
            {
                if (j != i && j != i - 1)
                {
                    res = min(res * arr[j], res + arr[j]);
                }
            }

            ans = min(ans, res);
        }

        cout << ans << endl;
    }

    return 0;
}