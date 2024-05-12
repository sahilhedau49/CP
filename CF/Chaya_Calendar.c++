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
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int curr = arr[0];
        for (int i = 1; i < n; i++)
        {
            int n = arr[i];
            int j = 1;
            while (1)
            {
                if (n > curr)
                {
                    curr = n;
                    break;
                }
                else
                {
                    n = arr[i] * j;
                    j++;
                }
            }
        }

        cout << curr << endl;
    }
    return 0;
}