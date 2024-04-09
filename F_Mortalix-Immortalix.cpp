#include <iostream>
#include <vector>

using namespace std;

vector<int> constructPermutation(int n, int k)
{
    vector<int> perm(n);

    // Populate odd indices with odd values
    for (int i = 0; i < n; i += 2)
    {
        perm[i] = i + 1;
    }

    // Populate even indices with even values
    for (int i = 1; i < n; i += 2)
    {
        perm[i] = i + 2;
    }

    // Ensure the absolute difference between each consecutive value is >= k
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(perm[i] - perm[i + 1]) < k)
        {
            if (perm[i] < perm[i + 1])
            {
                perm[i + 1] += k;
            }
            else
            {
                perm[i] -= k;
            }
        }
    }

    // Ensure A[i] != i + 1
    for (int i = 0; i < n; i++)
    {
        if (perm[i] == i + 1)
        {
            if (i == n - 1)
            {
                perm[i] = i;
            }
            else
            {
                perm[i] = i + 2;
            }
        }
    }

    return perm;
}

int main()
{
    int n = 12, k = 3;
    vector<int> perm = constructPermutation(n, k);

    for (int i = 0; i < n; i++)
    {
        cout << perm[i] << " ";
    }
    cout << endl;

    return 0;
}