#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, n, k;
    string s, t;
    cin >> l;

    while (l-- && cin >> n >> k >> s >> t)
    {
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s != t)
            cout << "NO" << endl;
        else
        {
            // if (n - k >= n + 1 / 2)
            cout << "YES" << endl;
            // else
            //   cout << "NO" << endl;
        }
    }
    return 0;
}