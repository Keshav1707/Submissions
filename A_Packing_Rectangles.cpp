#include <bits/stdc++.h>
using namespace std;

bool canFit(int n, long long mid, long long w, long long h)
{
    return (mid / w) * (mid / h) >= n;
}

int main()
{
    int w, h, n;
    cin >> w >> h >> n;
    long long lo = 0, hi = 1, mid;
    while (!canFit(n, hi, w, h))
        hi *= 2;
    while (hi - lo > 1)
    {
        mid = (lo + hi) / 2;
        if (canFit(n, mid, w, h))
        {
            hi = mid;
        }
        else
        {
            lo = mid;
        }
    }
    if (canFit(n, lo, w, h))
        cout << lo << endl;
    else
        cout << hi << endl;
}
