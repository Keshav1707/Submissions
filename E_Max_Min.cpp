#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solve(const vector<int> &A)
{
    int N = A.size();
    vector<int> sorted_A = A;
    sort(sorted_A.begin(), sorted_A.end());

    int result = 0;
    for (int i = 0; i < N - 1; i++)
    {
        int min_val = sorted_A[i];
        int max_val = sorted_A[N - 1];
        result += (N - i - 1) * max(min_val, max_val);
    }

    return result;
}

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    cout << solve(A) << endl;
    return 0;
}