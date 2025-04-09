#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a[t];
    for (auto &&i : a)
        cin >> i;
    for (size_t i = 1; i < t; i++)
    {
        if (a[i] < a[i - 1])
            cout << i << endl;
    }

    return 0;
}