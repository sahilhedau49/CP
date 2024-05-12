#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, k;
        cin >> a >> b >> k;

        long long pos = 0;
        pos = a * (k / 2 + k % 2) - b * (k / 2);

        cout << pos << endl;
    }

    return 0;
}