#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

struct State
{
    int len, link;
    unordered_map<char, int> next;
};

class SuffixAutomaton
{
    vector<State> st;
    int last;
    long long total;

public:
    SuffixAutomaton() : last(0), total(0) { st.push_back({0, -1}); }

    void extend(char c)
    {
        int p = last, cur = st.size();
        st.push_back({st[p].len + 1, 0});
        while (p >= 0 && !st[p].next.count(c))
        {
            st[p].next[c] = cur;
            p = st[p].link;
        }
        if (p == -1)
            st[cur].link = 0;
        else
        {
            int q = st[p].next[c];
            if (st[p].len + 1 == st[q].len)
                st[cur].link = q;
            else
            {
                int clone = st.size();
                st.push_back({st[p].len + 1, st[q].link, st[q].next});
                while (p >= 0 && st[p].next[c] == q)
                {
                    st[p].next[c] = clone;
                    p = st[p].link;
                }
                st[q].link = st[cur].link = clone;
            }
        }
        last = cur;
        total += st[cur].len - st[st[cur].link].len;
    }

    void clear()
    {
        st = {{0, -1}};
        last = 0;
        total = 0;
    }

    long long get() const { return total; }
};

class DynamicString
{
    SuffixAutomaton sa;
    stack<char> hist;

public:
    void append(char c) { sa.extend(c), hist.push(c); }

    void remove()
    {
        if (hist.empty())
            return;
        hist.pop();
        sa.clear();
        stack<char> tmp, rev;
        tmp = hist;
        while (!tmp.empty())
            rev.push(tmp.top()), tmp.pop();
        while (!rev.empty())
            sa.extend(rev.top()), rev.pop();
    }

    long long query() const { return sa.get(); }
};

int main()
{
    DynamicString ds;
    string s;
    cin >> s;
    for (char c : s)
    {
        if (c == '-')
            ds.remove();
        else if (c == '*')
            cout << ds.query() << " ";
        else
            ds.append(c);
    }
    cout << endl;
}
