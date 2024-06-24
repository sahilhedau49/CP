#include <bits/stdc++.h>
using namespace std;

int isBig(vector<vector<int>> &mat, int i, int j, int m, int n)
{
    int delta_x[4] = {-1, 0, 1, 0};
    int delta_y[4] = {0, -1, 0, 1};
    int maxi = INT_MIN;
    bool big = true;

    for (int k = 0; k < 4; k++)
    {
        int nx = i + delta_x[k];
        int ny = j + delta_y[k];

        if (nx >= 0 && nx < m && ny >= 0 && ny < n)
        {
            if (mat[nx][ny] >= mat[i][j])
            {
                big = false;
            }
            maxi = max(maxi, mat[nx][ny]);
        }
    }

    if (big)
        return maxi;
    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int m, n;
        cin >> m >> n;
        vector<vector<int>> mat(m, vector<int>(n));

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat[i][j];
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int maxi = isBig(mat, i, j, m, n);
                if (maxi != -1)
                    mat[i][j] = maxi;
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}