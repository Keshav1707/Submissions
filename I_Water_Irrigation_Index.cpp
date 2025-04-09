#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int ROOT = 3;
const int ROOT_INV = 332748118;

vector<int> rev;
vector<long long> roots = {0, 1};

long long mod_pow(long long base, int exp)
{
    long long result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}

void ensure_size(int bits)
{
    int n = 1 << bits;
    if (rev.size() >= n)
        return;
    rev.resize(n);
    for (int i = 1; i < n; ++i)
    {
        rev[i] = (rev[i >> 1] >> 1) | ((i & 1) << (bits - 1));
    }
    roots.resize(n);
    while (roots.size() < n)
    {
        int sz = roots.size();
        long long w = mod_pow(ROOT, (MOD - 1) / (sz << 1));
        for (int i = sz; i < (sz << 1); ++i)
        {
            roots.push_back((roots[i - sz] * w) % MOD);
        }
    }
}

void ntt(vector<long long> &a, bool inv = false)
{
    int n = a.size();
    int bits = 0;
    while ((1 << bits) < n)
        ++bits;
    ensure_size(bits);
    int shift = 32 - bits;
    for (int i = 1; i < n; ++i)
    {
        if (i < rev[i] >> shift)
        {
            swap(a[i], a[rev[i] >> shift]);
        }
    }
    for (int len = 1; len < n; len <<= 1)
    {
        for (int i = 0; i < n; i += len << 1)
        {
            for (int j = 0; j < len; ++j)
            {
                long long u = a[i + j];
                long long v = (a[i + j + len] * roots[len + j]) % MOD;
                a[i + j] = (u + v) % MOD;
                a[i + j + len] = (u - v + MOD) % MOD;
            }
        }
    }
    if (inv)
    {
        reverse(a.begin() + 1, a.end());
        long long inv_n = mod_pow(n, MOD - 2);
        for (int i = 0; i < n; ++i)
        {
            a[i] = (a[i] * inv_n) % MOD;
        }
    }
}

vector<long long> multiply(vector<long long> a, vector<long long> b)
{
    int sz = a.size() + b.size() - 1;
    int bits = 0;
    while ((1 << bits) < sz)
        ++bits;
    int n = 1 << bits;
    a.resize(n);
    b.resize(n);
    ntt(a);
    ntt(b);
    for (int i = 0; i < n; ++i)
    {
        a[i] = (a[i] * b[i]) % MOD;
    }
    ntt(a, true);
    a.resize(sz);
    return a;
}

vector<long long> poly_pow(vector<long long> p, int exponent, int max_degree)
{
    vector<long long> res(1, 1);
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
        {
            res = multiply(res, p);
            if (res.size() > max_degree + 1)
            {
                res.resize(max_degree + 1);
            }
        }
        p = multiply(p, p);
        if (p.size() > max_degree + 1)
        {
            p.resize(max_degree + 1);
        }
        exponent /= 2;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (k <= 0 || k > n)
        {
            cout << 0 << endl;
            return 0;
        }

        vector<long long> fact(n + 1), inv_fact(n + 1);
        fact[0] = 1;
        for (int i = 1; i <= n; ++i)
        {
            fact[i] = fact[i - 1] * i % MOD;
        }
        inv_fact[n] = mod_pow(fact[n], MOD - 2);
        for (int i = n - 1; i >= 0; --i)
        {
            inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
        }

        vector<long long> c(n + 1, 0);
        c[1] = 1;
        for (int m = 2; m <= n; ++m)
        {
            int exponent = m * (m - 1) / 2;
            long long total = mod_pow(2, exponent);
            long long sum = 0;
            for (int i = 1; i < m; ++i)
            {
                int choose = (fact[m - 1] * inv_fact[i - 1] % MOD) * inv_fact[m - i] % MOD;
                exponent = (m - i) * (m - i - 1) / 2;
                long long pow2 = mod_pow(2, exponent);
                long long term = (choose * c[i] % MOD) * pow2 % MOD;
                sum = (sum + term) % MOD;
            }
            c[m] = (total - sum + MOD) % MOD;
        }

        vector<long long> P(n + 1, 0);
        for (int m = 1; m <= n; ++m)
        {
            P[m] = c[m] * inv_fact[m] % MOD;
        }

        vector<long long> Q = poly_pow(P, k, n);

        if (n >= Q.size())
        {
            cout << 0 << endl;
        }
        else
        {
            long long S = Q[n];
            long long ans = (fact[n] * S % MOD) * inv_fact[k] % MOD;
            cout << ans << endl;
        }
    }

    return 0;
}