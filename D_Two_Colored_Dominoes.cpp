#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m;
    cin >> t;
    while (t-- && cin >> n >> m)
    {

        char x;
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            int c = 0;
            for (size_t j = 0; j < m; j++)
            {
                cin >> x;
                if (x != '.')
                    c++;
            }
            if (c & 1)
            {
                cout << -1 << endl;
                break;
            }
        }
    }
    return 0;
}