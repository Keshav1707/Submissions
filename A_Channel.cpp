#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a, q;
    cin >> t;
    while (t-- && cin >> n >> a >> q)
    {
        char x[q];
        for (auto &&i : x)
        {
            cin >> i;
        }
        int c = 0;
        int f = 0, z = a, y = a;
        for (size_t i = 0; i < q; i++)
        {
            /* code */
            if (x[i] == '+')
                y++;
            else if (x[i] == '-')
                f++;
            if (f && x[i] == '+')
                f--;
            else if (x[i] == '+')
                z++;
        }
        if (y < n && z < n)
            cout << "NO" << endl;
        else if (y >= n && z < n)
            cout << "MAYBE" << endl;
        else
            cout << "YES" << endl;
        // cout << y << " " << z << endl;
    }
    return 0;
}