#include <bits/stdc++.h>
using namespace std;
int solve(string s)
{
    for (auto &&i : s)
    {
        if (i == '3')
        {
            return 31;
        }
        else if (i == '1')
        {
            return 13;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    string s;
    while (t-- && cin >> s)
    {
        cout << solve(s) << endl;
    }
    return 0;
}