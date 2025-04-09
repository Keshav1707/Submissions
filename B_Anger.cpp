#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define di(x) \
    ll x;     \
    cin >> x
#define vecll vector<ll>
#define sz(x) ((int)(x).size())
#define pb push_back
#define po pop_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define endl "\n"
#define PI 3.14159265359
typedef pair<ll, ll> pairs;
typedef priority_queue<int, vector<int>, greater<int>> minheap;
typedef priority_queue<int> maxheap;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 1;

// Precompute small primes using the Sieve of Eratosthenes
vector<int> primes;
vector<bool> is_prime(MAX, true);

void sieve()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < MAX; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (int j = i * i; j < MAX; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

int phi(int n)
{
    int result = n;
    for (int p : primes)
    {
        if (p * p > n)
            break;
        if (n % p == 0)
        {
            while (n % p == 0)
            {
                n /= p;
            }
            result -= result / p;
        }
    }

    if (n > 1)
    {
        result -= result / n;
    }
    return result;
}

void solve()
{
    di(n);

    int x = phi(n);
    int a = (x + 1) / 2;
    int b = x / 2;
    a *= n;
    b *= n;
    n -= x;
    if (x % 2 == 1)
    {
        b++;
        n -= x;
        n--;
    }
    a += (n + 1) / 2;
    b += n / 2;
    if (a == b)
    {
        cout << "TIE" << endl;
    }
    else
    {
        cout << (a > b ? "ALICE" : "BOB") << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Precompute primes
    sieve();

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
