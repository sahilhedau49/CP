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
            int temp;
            cin >> temp;
            arr[i] = temp;
        }

        int maxi = INT_MIN;
        int curr = 0;
        int flag = 0;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(arr[i]);
            curr += arr[i];
            int m = ans.size();
            int a, b;
            if (m > 1)
            {
                a = ans[m - 1];
                b = ans[m - 2];

                cout << a << b;

                if (a % 2 == b % 2)
                {
                    curr = 0;
                    ans.clear();
                    cout<<"++"<<ans.size()<<"++";
                }
            }
            if (curr < 0)
            {
                curr = 0;
                ans.clear();
            }
            maxi = max(maxi, curr);
        }

        cout << maxi << endl;
    }

    return 0;
}