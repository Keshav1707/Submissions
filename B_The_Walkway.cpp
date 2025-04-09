#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, m, d;
    cin >> t;
    while (t-- && cin >> n >> m >> d)
    {
        int a[m], b[m];
        b[0] = 0;
        for (auto &&i : a)
            cin >> i;
        for (size_t i = 1; i < m; i++)
        {
            b[i] = a[i] - a[i - 1];
            if (a[i] - a[i - 1] >= d && a[i + 1] - a[i - 1])
        }
    }
    return 0;
}