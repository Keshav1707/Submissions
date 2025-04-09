#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t-- && cin >> n)
    {
        map<int, int> m;
        int x, f = n * (n - 1) / 2;
        for (size_t i = 0; i < f; i++)
        {
            cin >> x;
            m[x]++;
        }
        int temp = n - 1, maxi = INT_MIN, c = 0;
        for (auto &&i : m)
        {
            // cout<<i.first<<" "<<i.second<<endl;
            while (i.second > 0 && temp > 0)
            {
                i.second -= temp;
                cout << i.first << " ";
                c++;
                maxi = max(maxi, i.first);
                temp--;
            }
        }
        for (size_t i = 0; i < n - c; i++)
        {
            cout << maxi << " ";
        }

        cout << endl;
    }
    return 0;
}