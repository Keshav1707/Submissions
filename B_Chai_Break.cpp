#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<pair<int, int>> v;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, 1});
    }
    int m, k;
    cin >> m >> k;
    while (m--)
    {
        vector<pair<int, int>> va;
        va.push_back({0, 0});
        for (auto i : v)
            va.push_back(i);
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            va.push_back({x, -1});
        }
        va.push_back({INT_MAX, 0});
        sort(va.begin(), va.end());

        int a = 0;
        int l = va.size();
        for (int i = 1; i <= t + k; i++)
        {
            int mini = INT_MAX;
            // cout<<va[i-1].first<<" "<<va[i].first<<" "<<va[i+1].first<<endl;
            // cout << i << "i";
            if (va[i].second == 1 && va[i - 1].second == -1)
            {

                mini = min(mini, abs(va[i].first - va[i - 1].first));
            }
            if (v[a].second == 1 && va[i + 1].second == -1)
            {

                mini = min(mini, abs(va[i].first - va[i + 1].first));
            }
            cout << mini << endl;
            if (mini == INT_MAX)
                continue;
            a += mini;
        }
        cout << endl;
        cout << a << " ";
    }
    cout << endl;
}