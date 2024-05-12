#include <bits/stdc++.h>
using namespace std;

int getDigitSum(int num)
{
    if (num < 10)
    {
        return num * (num + 1) / 2;
    }

    int d = log10(num);
    vector<int> arr(d + 1);
    arr[0] = 0;
    arr[1] = 45;
    for (int i = 2; i <= d; i++)
    {
        arr[i] = arr[i - 1] * 10 + 45 * ceil(pow(10, i - 1));
    }

    int p = ceil(pow(10, d));
    int msd = num / p;

    return msd * arr[d] + (msd * (msd - 1) / 2) * p + msd * (1 + num % p) + getDigitSum(num % p);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int sum = getDigitSum(n);
        cout << sum << endl;
    }

    return 0;
}