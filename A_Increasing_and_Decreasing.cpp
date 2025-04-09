#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y, n;
    cin >> t;
    while (t-- && cin >> x >> y >> n)
    {
        vector<int> v;
        int i = 1;
        while (n--)
        {
            v.push_back(y);
            y -= i;
            i++;
        }
        if (v.back() >= x)
        {
            v.back() = x;
            while (v.size() != 0)
            {
                cout << v.back() << " ";
                v.pop_back();
            }
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}