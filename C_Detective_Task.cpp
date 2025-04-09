#include <bits/stdc++.h>
using namespace std;
int longestKSubstr(string s, int k)
{
    // your code here
    unordered_map<char, int> um;
    int c = 0, maxi = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        um[s[i]] = s.size() - i;
        c++;
        cout << " " << um[s[i]] << " " << s[i] << " " << c << " ";
        if (um.size() > k)
        {
            maxi = max(c - 1, maxi);
            c -= um[s.back()];

            um.erase(s.back());
            s.pop_back();
        }
        cout << um.size() << " " << endl;
    }
    maxi = max(c, maxi);
    for (auto &&i : um)
    {
        cout << i.first << endl;
    }
    cout << s << endl;
    if (um.size() < k)
        return -1;
    return maxi;
}
int main()
{
    string s = "aabacbebebe";
    int a = 3;
    cout << longestKSubstr(s, a);
}