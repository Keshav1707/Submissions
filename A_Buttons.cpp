#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> m >> n;
    int nums1[m + n], nums2[n];
    for (size_t i = 0; i < m + n; i++)
    {

        /* code */ cin >> nums1[i];
    }
    for (auto &&i : nums2)
        cin >> i;
    int x = m - 1, y = n - 1, c = m + n - 1;
    while (y >= 0)
    {
        if (nums1[x] >= nums2[y])
            nums1[c] = nums1[x], x--;
        else
            nums1[c] = nums2[y], y--;
        c--;
    }
    for (auto &&i : nums1)
        cout << i << " ";
    cout << endl;
    string s = "abbaca";
    string check = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (check.size() == 0)
            check.push_back(s[i]);
        else if (check.back() == s[i])
            check.pop_back();
        else
            check.push_back(s[i]);
    }
    cout << check;

    return 0;
}