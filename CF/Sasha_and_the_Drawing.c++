#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        int n, k;
        cin >> n >> k;

        int ans = ceil(k / 2.0);

        if (k == (4 * n - 2))
        {
            cout << ans + 1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}