#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, a, b, c, x, y;
    cin >> t;
    while (t-- && cin >> a >> b >> c >> x >> y)
    {
        // cout << a << " " << b << " " << c << " " << x << " " << y << endl;
        if (x > a)
            x -= a;
        else
            x = 0;
        if (y > b)
            y -= b;
        else
            y = 0;
        // cout << a + b << endl;
        if (x + y <= c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}