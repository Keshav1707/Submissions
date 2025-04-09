#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x;
    cin >> t;
    int maxi = INT_MAX;
    while (t--)
    {
        cin >> x;
        maxi = min(maxi, abs(x));
    }
    cout << maxi << endl;
    return 0;
}