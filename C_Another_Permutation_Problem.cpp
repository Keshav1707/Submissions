#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin >> t;
    while (t--&&cin>>n)
    {
        if (n == 2)
    {
        cout << 2 << endl;
        
    }
    else
    {
    vector<int> m(n);
    for (size_t i = 0; i < n; i++)
    {
        m[i] = i + 1;
    }
    int maxi = -1;
    for (size_t i = 1; i < n; i++)
    {
        reverse(m.begin() + i, m.end());
        
        vector<int> a(n);
        for (size_t i = 0; i < n; i++)
        {
            a[i] = (m[i] * (i + 1));
        }
        int sum = 0;
        for (size_t i = 0; i < n; i++)
        {
            sum += a[i];
        }
        sum -= *max_element(a.begin(), a.end());
        maxi = max(maxi, sum);
        reverse(m.begin() + i, m.end());
    }
    cout << maxi << endl;
    }
    }
    return 0;
}