#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000001
#define int long long

int spf[MAXN];

int M[MAXN] = {0};

void sieve()

{

    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)

        spf[i] = i;

    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;

    for (int i = 3; i * i < MAXN; i++)
    {

        if (spf[i] == i)
        {
            for (int j = i * i; j < MAXN; j += i)

                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

void counthash(int x)
{
    int temp;
    while (x != 1)
    {
        temp = spf[x];
        if (x % temp == 0)
        {
            M[spf[x]]++;
            x = x / spf[x];
            return;
        }
        while (x % temp == 0)
            x = x / temp;
    }
}

void generate(int arr[], int n)
{
    sieve();
    for (int i = 0; i < n; i++)
        counthash(arr[i]);
}

set<int> getF(int x)
{
    set<int> s;
    while (x != 1)
    {
        s.insert(spf[x]);
        x = x / spf[x];
    }
    return s;
}

int32_t main()
{
    int n;
    cin >> n;

    int a[n], b[n];
    for (int &i : a)
        cin >> i;
    for (int &i : b)
        cin >> i;
    // int x[] = {12,14,16};
    generate(a, n);

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        set<int> s;
        s = getF(b[i]);
        int mx = 0;
        // cout<<b[i]<<" ";
        for (int i : s)
        {
            mx += M[i];
            // cout<<i<<" ";
            // cout<<M[i]<<endl;
        }
        // cout<<endl<<" \n";
        c += mx;
    }
    // cout<<M[3];
    cout << c;
    return 0;
}