#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int N, X, Y, Q;
    cin >> N >> X >> Y;
    int x, y, sum = 0;
    int xa, xb;
    cin >> xa >> xb;
    sum += xb + xa;
    for (size_t i = 0; i < N - 2; i++)
    {
        /* code */
        cin >> x >> y;
        if (sum % x == 0)
            sum += y;
        else
            sum += (x - sum % x) + y;
    }
    sum += Y - X;
    // cout << sum << endl;
    cin >> Q;
    long long q;
    while (Q--)
    {
        cin >> q;
        cout << q + sum + (q + X - (q + X % xa)) + Y << endl;
        // cout << sum << endl;
    }

    return 0;
}