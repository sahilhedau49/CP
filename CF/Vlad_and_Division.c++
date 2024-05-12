#include <bits/stdc++.h>
using namespace std;

int getCompliment(int num)
{
    int nb = 31;
    return ((1 << nb) - 1) ^ num;
}

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

        set<int> s;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int c = getCompliment(arr[i]);
            auto it = s.find(c);
            if (it == s.end())
            {
                s.insert(arr[i]);
            }
            else
            {
                s.erase(it);
                count++;
            }
        }

        cout << n - count << endl;
    }

    return 0;
}