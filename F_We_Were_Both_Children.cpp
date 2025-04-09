#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;

    while (t-- && cin >> n)
    {
        vector<int> v(n + 1, 0);
        map<int, int> m;
        int x;
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            cin >> x;
            if (x <= n)
            {
                m[x]++;
            }
        }
        int maxi = 0;
        for (auto &&i : m)
        {

            int x = i.first;
            int y = i.first, z = i.second;

            while (x <= n)
            {

                v[x] += z;
                x += y;
            }
        }
        for (auto &&i : v)
        {
            maxi = max(maxi, i);
        }

        cout << maxi << endl;
    }
    return 0;
}