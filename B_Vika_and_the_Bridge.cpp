#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> v, int mid, int k)
{
    int c = 0;
    for (size_t i = 0; i < v.size();)
    {
        /* code */
        if (v[i] == v[i + 1])
            i++;
        else
        {
            if (v[i + mid + 1] != v[i])
                c++;
            i += mid + 1;
        }
    }

    if (c > 2)
        return 0;
    else
        return 1;
}
int main()
{
    int t, n, k;
    cin >> t;
    while (t-- && cin >> n >> k)
    {
        vector<int> v;
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            int x;
            cin >> x;
            v.push_back(x);
        }
        int lo = 0, hi = n, mid;
        while (lo <= hi)
        {
            mid = (hi + lo) >> 1;
            if (solve(v, mid, k) == 0)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        cout << lo << endl;
    }
    return 0;
}