#include <bits/stdc++.h>
using namespace std;

int findc(vector<int> &v)
{
    priority_queue<int> pq(v.begin(), v.end());

    while (pq.size() > 1)
    {
        int largest = pq.top();
        pq.pop();
        int secondLargest = pq.top();
        pq.pop();
        int reducedValue = largest - secondLargest;
        if (reducedValue > 0)
        {
            pq.push(reducedValue);
        }
    }
    return pq.top();
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n, 0);
    for (int i = 0; i < m; ++i)
    {
        int x;
        cin >> x;
        v[x - 1]++;
    }

    int c = findc(v);
    cout << c << endl;

    return 0;
}
