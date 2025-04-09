#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        n++;
        long long sum = 0;
        for (size_t i = 1; i < n; i++)
        {
            /* code */

            long long x = i, p = 1;

            while (true)
            {
                /* code */
                sum += p;
                p *= i;
                if (sum >= n)
                    break;
            }
        }
        if (sum == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}