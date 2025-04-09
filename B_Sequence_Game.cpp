#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t-- && cin >> n)
    {
        vector<int> v, a;
        int x;
        for (size_t i = 0; i < n; i++)
            cin >> x, v.push_back(x);
        a.push_back(v[0]);
        for (size_t i = 1; i < n; i++)
        {
            a.push_back(v[i]);
            if (v[i] < v[i - 1])
                a.push_back(v[i]);
        }
        cout << a.size() << endl;
        for (auto &&i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}