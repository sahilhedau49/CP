#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr[i] = t;
    }

    unordered_set<int> check;
    vector<int> ans;

    for (int i = n - 1; i >= 0; i--)
    {
        if (check.find(arr[i]) == check.end())
        {
            ans.push_back(arr[i]);
            check.insert(arr[i]);
        }
    }

    cout << ans.size() << endl;
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }

    return 0;
}