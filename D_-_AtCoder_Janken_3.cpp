#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define di(x) \
    ll x;     \
    cin >> x
#define vecll vector<ll>
#define pb push_back
#define po pop_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el << endl;
#define PI 3.14159265359
#define MOD int(1e9 + 7)
typedef pair<ll, ll> pairs;

vector<vector<int>> memo;

int moveToIndex(char move)
{
    if (move == 'R')
        return 0;
    if (move == 'P')
        return 1;
    return 2;
}

char winningMove(char aokiMove)
{
    if (aokiMove == 'R')
        return 'P';
    if (aokiMove == 'P')
        return 'S';
    return 'R';
}

int rec(int ind, int prevMove, const string &s)
{
    if (ind == s.size())
    {
        return 0;
    }

    if (memo[ind][prevMove + 1] != -1)
    {
        return memo[ind][prevMove + 1];
    }

    int win = 0;
    char winChar = winningMove(s[ind]);
    int winMove = moveToIndex(winChar);

    if (prevMove == -1)
    {
        win = 1 + rec(ind + 1, winMove, s);
        int tieMove = moveToIndex(s[ind]);
        win = max(win, rec(ind + 1, tieMove, s));
    }
    else
    {
        if (winMove != prevMove)
        {
            win = 1 + rec(ind + 1, winMove, s);
        }
        int tieMove = moveToIndex(s[ind]);
        if (tieMove != prevMove)
        {
            win = max(win, rec(ind + 1, tieMove, s));
        }
    }

    memo[ind][prevMove + 1] = win;
    return win;
}

void solve()
{
    di(x);
    string s;
    cin >> s;

    memo.assign(x, vector<int>(4, -1));

    int ans = rec(0, -1, s);
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
