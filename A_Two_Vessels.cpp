#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long double a, b, c;
    cin >> t;
    while (t-- && cin >> a >> b >> c)
    {
        long double s = abs(a - (a + b) / 2);
        cout << ceil(s / c) << endl;
    }
    return 0;
}