#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t-- && cin >> n)
    {
        int x;
        vector<int> a(n + 1);
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            cin >> x;
            a[x] = i + 1;
        }
        int c = 0;
        for (size_t i = 1; i < n; i++)
        {
            /* code */
            if (a[i + 1] < a[i])
                c++;
        }
        cout << c << endl;
    }
    return 0;
}