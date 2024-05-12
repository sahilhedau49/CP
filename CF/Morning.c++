#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();

        int time = 0;
        int i = 1;
        time = int(s[0]) - 48;

        while (i < n)
        {
            time += (int(s[i]) + int(s[i - 1])) % 9 + 1;
            i++;
        }

        cout << time << endl;
    }

    return 0;
}