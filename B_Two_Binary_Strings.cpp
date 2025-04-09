#include <bits/stdc++.h>
using namespace std;
int solve()
{
    string sa, sb;
    cin >> sa >> sb;
    for (size_t i = 1; i < sa.size(); i++)
    {
        /* code */
        if (sa[i] == '1' && sa[i - 1] == '0' && sb[i] == '1' && sb[i - 1] == '0')
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}