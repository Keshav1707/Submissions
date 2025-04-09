#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        int n;
        cin >> n;
        pq.push(n);
    }
    int x, y;
    cin >> x >> y;
    int ans = 0;
    int cury = 0;
    while (!pq.empty())
    {
        if (pq.top() <= cury)
            pq.pop();
        else
        {
            int n = pq.top();
            pq.pop();
            if (n - x > cury)
                pq.push(n - x + y);
            ans++;
            cury += y;
        }
    }
    cout << ans << endl;
    return;
}