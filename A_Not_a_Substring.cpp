#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define int long long
#define ll long long
#define vi vector<int>
#define si set<int>
#define mii map<int, int>
#define pii pair<int, int>
#define ff first
#define ss second
#define f(i, a, b) for (int i = a; i < b; i++)
#define rev(i, a, b) for (int i = a; i >= b; i--)
#define nl '\n'

void solve()
{
    string s;
    cin >> s;
    if (s == "()")
    {
        cout << "No" << endl;
        return;
    }
    bool flag = true;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            flag = false;
            break;
        }
    }
    cout << "Yes\n";
    if (flag)
    {
        cout << string(s.length(), '(');
        cout << string(s.length(), ')');
        cout << endl;
    }
    else
    {
        bool check = true;
        for (int i = 0; i < 2 * s.length(); i++)
        {
            if (check)
            {
                cout << '(';
                check = false;
            }
            else
            {
                cout << ')';
                check = true;
            }
        }
        cout << endl;
    }
}

int32_t main()
{
    int t = 1;
    cin >> t;
    int i = 1;

    while (t--)
    {
        i++;
        solve();
    }
    return 0;
}