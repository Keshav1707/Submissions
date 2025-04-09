#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    long long n;
    cin >> t;

    while (t-- && cin >> n)
    {
        vector<int> g(n);
        for (size_t i = 0; i < n; ++i)
        {
            cin >> g[i];
        }
        long long maxi = *max_element(g.begin(), g.end());
        if (maxi > n)
        {
            cout << "NO" << endl;
            continue;
        }

        vector<int> p(n + 1, 0);
        for (int i = 0; i < n; ++i)
        {
            p[0]++;
            p[g[i]]--;
        }

        long long z = 0;
        for (int i = 0; i < n; ++i)
        {
            z += p[i];
            p[i] = z;
        }

        bool ch = true;
        for (int i = 0; i < n; ++i)
        {
            if (p[i] != g[i])
            {
                ch = false;
                break;
            }
        }

        cout << (ch ? "YES" : "NO") << endl;
    }

    return 0;
}