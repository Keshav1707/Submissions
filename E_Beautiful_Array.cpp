#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define di(x) \
    ll x;     \
    cin >> x
#define vecll vector<ll>
#define pb push_back
#define endl "\n"
#define PI 3.14159265359
typedef pair<ll, ll> pairs;
typedef priority_queue<int, vector<int>, greater<int>> minheap;
typedef priority_queue<int> maxheap;
const int MOD = 1e9 + 7;

int applyOperation(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '*':
        return a * b;
    default:
        throw runtime_error("Invalid operator");
    }
}

int evaluateExpression(const string &expression)
{
    stack<int> values;
    stack<char> ops;
    istringstream iss(expression);
    char token;

    while (iss >> token)
    {
        if (isdigit(token))
        {
            iss.putback(token);
            int value;
            iss >> value;
            values.push(value);
        }
        else if (token == '+' || token == '*')
        {
            while (!ops.empty() && ops.top() == '*')
            {
                int value2 = values.top();
                values.pop();
                int value1 = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(applyOperation(value1, value2, op));
            }
            ops.push(token);
        }
    }

    while (!ops.empty())
    {
        int value2 = values.top();
        values.pop();
        int value1 = values.top();
        values.pop();
        char op = ops.top();
        ops.pop();
        values.push(applyOperation(value1, value2, op));
    }

    return values.top();
}

int mini = LLONG_MAX;

void rec(int ind, char prev, string expr, bool twodigs, const vector<int> &digs)
{
    if (ind == digs.size())
    {
        if (!twodigs)
            return;
        mini = min(mini, evaluateExpression(expr));
        return;
    }

    if (!twodigs)
    {
        expr.push_back(digs[ind] + '0');
        rec(ind + 1, prev, expr, true, digs);
        expr.pop_back();
    }

    if (prev == '+')
    {
        expr.push_back('*');
        expr.push_back(digs[ind] + '0');
        rec(ind + 1, '*', expr, twodigs, digs);
        expr.pop_back();
        expr.pop_back();
    }
    else
    {
        expr.push_back('+');
        expr.push_back(digs[ind] + '0');
        rec(ind + 1, '+', expr, twodigs, digs);
        expr.pop_back();
        expr.pop_back();
    }
}

void solve()
{
    di(x);
    vecll v(x);
    for (ll i = 0; i < x; i++)
    {
        char c;
        cin >> c;
        v[i] = c - '0';
    }

    mini = LLONG_MAX;
    string expr;
    expr.pb(v[0] + '0');
    rec(1, '+', expr, false, v);
    rec(1, '*', expr, false, v);
    cout << mini << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
