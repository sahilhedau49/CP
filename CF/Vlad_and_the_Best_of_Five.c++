#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int countA = 0, countB = 0;
        string str;
        cin >> str;

        for (char c : str)
        {
            if (c == 'A')
                countA++;
            else
                countB++;
        }

        if (countA > countB)
        {
            cout << 'A' << endl;
        }
        else
        {
            cout << 'B' << endl;
        }
    }

    return 0;
}