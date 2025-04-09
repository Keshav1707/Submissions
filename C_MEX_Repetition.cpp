#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while (t-- && cin >> n >> k)
    {
        k = k % (n + 1);
        vector<int> a(n + 1), temp(n + 1, 0);
        for (size_t i = 0; i < n; i++)
        {
            /* code */
            cin >> a[i];
            temp[a[i]]++;
        }
        for (size_t i = 0; i < n + 1; i++)
        {
            /* code */
            if (temp[i] == 0)
            {
                a[n] = i;
            }
        }
        for (size_t i = n + 1 - k; i < n + 1; i++)
        {
            cout << a[i] << " ";
        }
        for (size_t i = 0; i < n - k; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}