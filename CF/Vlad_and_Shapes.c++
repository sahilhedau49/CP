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
        int prevCount = 0;

        vector<string> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            int count = 0;

            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == '1')
                    count++;
            }

            if (prevCount && prevCount == count)
            {
                cout << "SQUARE\n";
                break;
            }
            if (prevCount)
            {
                cout << "TRIANGLE\n";
                break;
            }

            prevCount = count;
        }
    }

    return 0;
}