#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    map<string, int> m;
    for (size_t i = 0; i < t; i++)
    {
        /* code */
        string s;
        cin >> s;
        m[s]++;
        if (m[s] > 1)
            cout << s << m[s] - 1 << endl;
        else
            cout << "OK" << endl;
    }

    return 0;
}