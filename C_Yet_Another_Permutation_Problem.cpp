#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t-- && cin >> n)
    {
        int a[n] = {0};
        a[0] = 1;
        cout << 1 << " ";
        for (size_t i = 2; i <= n / 2; i++)
        {
            /* code */
            int k = i;
            a[i - 1]++;
            if (a[i - 1] < 2)
            {
                cout << i << " ";
                while (k * 2 <= n)
                {
                    k *= 2;

                    if (a[k - 1] < 1)
                        cout << k << " ";
                    a[k - 1]++;
                }
            }
        }

        for (size_t i = n / 2 + 1; i <= n; i++)
        {
            /* code */
            if (a[i - 1] == 0)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}