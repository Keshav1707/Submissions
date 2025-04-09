#include <bits/stdc++.h>
using namespace std;

bool countword(vector<long long> &v, long long mid, long long m)
{
    long long n = v.size();
    long long lines = 1;
    long long wordsline = 0;
    for (long long i = 0; i < n; i++)
    {
        if (wordsline + v[i] + 1 <= mid)
        {

            wordsline += v[i] + 1;
        }
        else if (wordsline + v[i] <= mid)
        {
            wordsline += v[i];
        }
        else
        {

            lines++;
            wordsline = v[i];
        }
    }
    // cout << lines << " " << mid << endl;
    return lines <= m;
}

int main()
{

    long long n, m;
    cin >> n >> m;
    long long x;
    vector<long long> v;
    if (n < m)
    {
        cout << n << endl;
        return 0;
    }
    long long sum = 0, maxi = 0;
    for (long long i = 0; i < n; i++)
    {
        /* code */
        cin >> x;
        v.push_back(x);
        sum += x;
        maxi = max(maxi, x);
    }
    long long lo = maxi, hi = sum + n - 1;
    while (lo <= hi)
    {
        long long mid = (lo + hi) / 2;
        bool lines = countword(v, mid, m);
        if (lines)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << lo << endl;
    return 0;
}
