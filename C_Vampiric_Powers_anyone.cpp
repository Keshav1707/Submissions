#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t-- && cin >> n)
    {
        int maxi = 0;
        set<int> v;
        int x;
        v.insert(0);
        for (size_t j = 0; j < n; j++)
        {
            cin >> x;
            maxi = x ^ maxi;
            v.insert(maxi);
        }
        for (auto &&i : v)
        {
            maxi = max(maxi, i);
        }

        cout << maxi << endl;
    }
    return 0;
}