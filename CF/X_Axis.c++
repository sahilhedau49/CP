#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> x(3);
        for(int i=0;i<3;i++){
            cin>>x[i];
        }

        sort(x.begin(), x.end());

        int res = 0;
        res += x[1] - x[0];
        res += x[2] - x[1];

        cout<<res<<endl;
    }

    return 0;
}