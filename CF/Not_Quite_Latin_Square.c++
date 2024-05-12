#include <bits/stdc++.h>
using namespace std;

char findReplaced(vector<vector<char>> mat, int i, int j);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<char>> mat(3, vector<char>(3, '-'));

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                char c;
                cin >> c;
                mat[i][j] = c;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (mat[i][j] == '?')
                {
                    cout << findReplaced(mat, i, j) << endl;
                }
            }
        }
    }

    return 0;
}

char findReplaced(vector<vector<char>> mat, int i, int j)
{
    int cra = 0;
    int crb = 0;
    int crc = 0;
    int cca = 0;
    int ccb = 0;
    int ccc = 0;

    for (int k = 0; k < 3; k++)
    {
        if (mat[i][k] == 'A')
            cra++;
        else if (mat[i][k] == 'B')
            crb++;
        else
            crc++;
    }

    for (int k = 0; k < 3; k++)
    {
        if (mat[k][j] == 'A')
            cca++;
        else if (mat[k][j] == 'B')
            ccb++;
        else
            ccc++;
    }

    if (cra == 0 || cca == 0)
        return 'A';
    if (crb == 0 || ccb == 0)
        return 'B';

    return 'C';
}