#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double t, n;
    cin >> t;
    while (t-- && cin >> n)
    {
        long double mini = LONG_LONG_MAX, s, d;
        while (n-- && cin >> s >> d)
        {
            mini = min(mini, (s + ceil(d / 2)) - 1);
        }
        cout << mini << endl;
    }
    return 0;
}