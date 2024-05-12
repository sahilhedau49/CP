#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string ans;

        for (int i = n - 1; i >= 0;)
        {
            ans.push_back(s[i]);
            if (!isVowel(s[i]) && isVowel(s[i - 1]) && !isVowel(s[i - 2]))
            {
                ans.push_back(s[i - 1]);
                ans.push_back(s[i - 2]);
                ans += '.';
                i -= 3;
            }
            else if (isVowel(s[i]) && !isVowel(s[i - 1]))
            {
                ans.push_back(s[i - 1]);
                ans += '.';
                i -= 2;
            }
        }
        ans = ans.substr(0, ans.length() - 1);
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}

bool isVowel(char c)
{
    if (c == 'a' || c == 'e')
        return true;
    return false;
}