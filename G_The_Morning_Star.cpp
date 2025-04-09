#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t-- && cin >> n)
    {
        vector<pair<int, int>> v;
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            long long x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        int c = 0;
        for (auto &&i : v)
        {
            for (auto &&j : v)
            {
                if (i == j)
                    continue;

                if (j.first - i.first == 0 || j.second - i.second == 0 || abs(j.first - i.first) == abs(j.second - i.second))
                    c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}