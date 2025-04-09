#include <iostream>
#include <vector>
using namespace std;

int n, g, v;
vector<double> memo;

double expectedThrows(int currentFloor, bool isGokuTurn)
{

    if (currentFloor >= n)
        return 0.0;

    if (memo[currentFloor] != -1.0)
        return memo[currentFloor];

    double sum = 0.0;
    int powerLevel = isGokuTurn ? g : v;
    int steps = min(powerLevel, n - currentFloor);

    for (int i = 1; i <= steps; ++i)
    {
        sum += expectedThrows(currentFloor + i, !isGokuTurn);
    }
    double expectedValue = sum / (steps + 1);

    if (isGokuTurn)
        expectedValue += 1;

    return memo[currentFloor] = expectedValue;
}

int main()
{

    cin >> n;

    cin >> g;

    cin >> v;

    memo.assign(n + 1, -1.0);

    double result = expectedThrows(0, true);
    cout << result << endl;

    return 0;
}
