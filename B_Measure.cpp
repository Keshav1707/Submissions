#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    cout << 1;
    for (size_t i = 1; i < t; i++)
    {
        /* code */
        bool c = 0;
        for (size_t j = 1; j < 10; j++)
        {
            /* code */
            if ((i * j) % t == 0)
            {
                cout << j;
                c = 1;
                break;
            }
        }
        if (!c)
            cout << "-";
    }

    cout << 1;

    return 0;
}