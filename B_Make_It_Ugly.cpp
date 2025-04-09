#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        vector<int> v(x);
        map<int, int> m;
        int maxi = 0, maxiele = -1;
        for (auto &&i : v)
        {
            cin >> i;
            m[i]++;
            if (m[i] > maxi)
                maxi = m[i], maxiele = i;
        }
        vector<int> va;
        va.push_back(0);
        int c = 1;
        for (auto &&i : v)
        {
            if (i != maxiele)
            {
                va.push_back(c);
            }
            c++;
        }
        va.push_back(x + 1);
        int maxdiff = INT_MAX;
        for (long long i = 1; i < va.size(); i++)
        {
            int diff = abs(va[i] - va[i - 1]) - 1;
            maxdiff = min(maxdiff, diff);
        }
        if (maxdiff >= x)
        {
            cout << -1 << endl;
        }
        else
            cout << maxdiff << endl;
    }
    return 0;
}