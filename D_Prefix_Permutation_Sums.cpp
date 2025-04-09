#include <bits/stdc++.h>
using namespace std;
string longestPalindrome(string s)
{
    vector<vector<int>> v(s.size());
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s.size() - i; j++)
        {
            if (s[i] == s[j])
                v[i].push_back(1);
            else
                v[i].push_back(0);
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    int maxi = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        int t = i, c, m, n;
        while (v[t - i][t] != 0)
        {
            c++;
        }
        if (c > maxi)
        {
            maxi = c;
            m = i;
            n = i - c;
        }
    }

    return "";
}
int main()
{
    string s = "babad";
    longestPalindrome(s);
}