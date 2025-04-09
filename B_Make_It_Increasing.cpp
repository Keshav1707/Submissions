#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t-- && cin >> n)
    {
        vector<int> v(n);
        int c = 0;
        for (auto &&i : v)
            cin >> i;
        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i + 1] == 0)
            {
                c = -1;
                break;
            }
            while (v[i] >= v[i + 1] && v[i] > 0)
            {

                v[i] = v[i] >> 1;
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}