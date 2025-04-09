#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct SegmentTree
{
    int n;
    vector<ll> tree;

    SegmentTree(int size)
    {
        n = 1;
        while (n < size)
            n <<= 1;
        tree.assign(2 * n, -1e18);
    }

    void update(int pos, ll value)
    {
        pos += n;
        if (tree[pos] >= value)
            return;
        tree[pos] = value;
        while (pos > 1)
        {
            pos >>= 1;
            ll new_val = max(tree[2 * pos], tree[2 * pos + 1]);
            if (tree[pos] == new_val)
                break;
            tree[pos] = new_val;
        }
    }

    ll query(int l, int r)
    {
        l += n;
        r += n;
        ll res = -1e18;
        while (l <= r)
        {
            if (l % 2 == 1)
                res = max(res, tree[l++]);
            if (r % 2 == 0)
                res = max(res, tree[r--]);
            l >>= 1;
            r >>= 1;
        }
        return res;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;

        unordered_map<int, int> pos_in_b;
        for (int i = 0; i < n; i++)
        {
            pos_in_b[b[i]] = i;
        }

        vector<int> pos(n);
        for (int i = 0; i < n; i++)
        {
            pos[i] = pos_in_b[a[i]];
        }

        vector<ll> suffix(n + 1, 0);
        for (int i = n - 1; i >= 0; i--)
        {
            suffix[i] = suffix[i + 1] + b[i];
        }

        SegmentTree st(n);
        ll initial = suffix[0];
        ll ans = initial;

        for (int p : pos)
        {
            ll current_max = st.query(0, p - 1);
            if (current_max < -1e17)
            {
                current_max = 0;
            }
            ll new_value = current_max + k + (p + 1 <= n ? suffix[p + 1] : 0);
            ll existing = st.query(p, p);
            if (new_value > existing)
            {
                st.update(p, new_value);
                ans = max(ans, new_value);
            }
        }

        cout << max(ans, initial) << '\n';
    }

    return 0;
}