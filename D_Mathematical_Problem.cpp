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
unordered_map<string, int> memo;
void generateStrings(int ind, string s, string curr, int k, int &mini)
{
    if (ind == s.size())
    {
        if (!isdigit(curr.back()))
            curr.pop_back();
        if (k == 0)
        {
            if (memo.find(curr) == memo.end())
            {
                int result = evaluateExpression(curr);
                memo[curr] = result;
            }
            mini = min(mini, memo[curr]);
        }
        return;
    }
    curr.push_back(s[ind]);
    generateStrings(ind + 1, s, curr, k, mini);
    curr.push_back('*');
    generateStrings(ind + 1, s, curr, k - 1, mini);
    curr.pop_back();
    curr.push_back('+');
    generateStrings(ind + 1, s, curr, k - 1, mini);
    curr.pop_back();
}
void solve()
{
    di(x);
    string s;
    cin >> s;
    int k = x - 2;
    int minia = LLONG_MAX;
    generateStrings(0, s, "", k, minia);

    cout << minia << endl;
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
