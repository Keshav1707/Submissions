#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m;
    string v = "vika";
    cin >> t;
    while (t-- && cin >> n >> m)
    {
        char a[n][m];
        int f = 0;
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (size_t i = 0; i < m; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                /* code */
                if (a[j][i] == v[f])
                {
                    f++;
                    j = n;
                }
            }
        }
        if (f == 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}