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
#define el << endl;
#define PI 3.14159265359
#define MOD int(1e9 + 7)
typedef pair<ll, ll> pairs;
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<ll> adj[4004];
void printSpiralMatrix(int N)
{
    vector<vector<int>> matrix(N, vector<int>(N, 0));

    int top = 0, bottom = N - 1, left = 0, right = N - 1;
    int value = 1;

    while (top <= bottom && left <= right)
    {
        // Traverse top row
        for (int i = left; i <= right; ++i)
            matrix[top][i] = value++;

        // Move to the next row
        top++;

        // Traverse right column
        for (int i = top; i <= bottom; ++i)
            matrix[i][right] = value++;

        // Move to the previous column
        right--;

        // Check if there is a row left
        if (top <= bottom)
        {
            // Traverse bottom row
            for (int i = right; i >= left; --i)
                matrix[bottom][i] = value++;

            // Move to the previous row
            bottom--;
        }

        // Check if there is a column left
        if (left <= right)
        {
            // Traverse left column
            for (int i = bottom; i >= top; --i)
                matrix[i][left] = value++;

            // Move to the next column
            left++;
        }
    }

    // Print the matrix
    for (const auto &row : matrix)
    {
        for (int cell : row)
        {
            if (cell == N * N)
            {
                cout << "T"
                     << '\t';
            }
            else
            {
                cout << cell << '\t';
            }
        }
        cout << '\n';
    }
}
void solve()
{
    di(n);
    printSpiralMatrix(n);
}
signed main()
{
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}