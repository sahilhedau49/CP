#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long tot = 0;
        for (long long i = 0; i < n; i++)
        {
            long long b;
            cin >> b;
            tot += b;
        }

        long long sq = (long long)sqrt(tot);
        if (sq * sq == tot)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}