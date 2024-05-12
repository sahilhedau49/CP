#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        unsigned long long int mul = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mul *= arr[i];
        }
        string str;
        cin >> str;

        vector<unsigned long long int> ans(n);

        int l = 0, r = n - 1;
        for (int i = 0; i < n; i++)
        {
            ans[i] = mul % k;
            if (str[i] == 'L')
            {
                mul /= arr[l];
                l++;
            }
            else
            {
                mul /= arr[r];
                r--;
            }
        }

        for (unsigned long long int num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}