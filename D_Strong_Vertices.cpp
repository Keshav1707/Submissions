#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n;
    cin >> t;
    while (t-- && cin >> n)
    {
        long long a[n], b[n];
        for (auto &&i : a)
            cin >> i;
        for (auto &&i : b)
            cin >> i;
        long long maxi = INT_MIN, c = 0;
        for (size_t i = 0; i < n; i++)
            maxi = max(maxi, a[i] - b[i]);
        for (size_t i = 0; i < n; i++)
            if (a[i] - b[i] == maxi)
                c++;
        cout << c << endl;
        for (size_t i = 0; i < n; i++)
            if (a[i] - b[i] == maxi)
                cout << i + 1 << " ";
        cout << endl;
    }
    return 0;
}
