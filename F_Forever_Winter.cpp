#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m;
    cin >> t;
    while (t-- && cin >> n >> m)
    {
        map<int, int> y, x;
        int a, b;
        for (size_t i = 0; i < m; i++)
        {
            /* code */
            cin >> a >> b;
            y[b]++;
            x[a]++;
        }
        for (auto &&i : y)
        {
            cout << i.first << " " << i.second << endl;
        }
        cout << endl;
        for (auto &&i : x)
        {
            cout << i.first << " " << i.second << endl;
        }
        cout << "\n\n";
    }
    return 0;
}