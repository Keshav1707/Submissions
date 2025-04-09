#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, x, y;
    cin >> t;
    while (t-- && cin >> n >> x >> y)
    {

        long long lcm = (x / gcd(x, y)) * y, c = n / lcm;

        long long a = n / x - c, b = n / y - c;
        long long sumx = 0, sumy = 0;
        sumx = a / 2 * (2 * n + (1 - a));
        sumy = (b * (b + 1) / 2);
        cout << sumx - sumy << endl;
    }
    return 0;
}