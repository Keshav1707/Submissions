#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

bool canDeliverAtSpeed(double speed, const vector<pair<double, double>> &deliveryWindows, int N)
{
    for (int i = 1; i <= N; ++i)
    {
        double time = i / speed; // time to reach station i
        // Check if time falls within the delivery window for station i
        if (time < deliveryWindows[i - 1].first || time > deliveryWindows[i - 1].second)
        {
            return false; // Not feasible
        }
    }
    return true; // Feasible to deliver at this speed
}

double findMinimumSpeed(int N, const vector<pair<double, double>> &deliveryWindows)
{
    double low = 0.0, high = N;  // Speed from 0 to N (worst case)
    const double epsilon = 1e-7; // Precision threshold since we need to be within 1e-6

    while (high - low > epsilon)
    {
        double mid = (low + high) / 2;
        if (canDeliverAtSpeed(mid, deliveryWindows, N))
        {
            high = mid; // look for a smaller speed
        }
        else
        {
            low = mid; // increase speed
        }
    }

    return (low < 1e-9) ? -1.0 : high; // Return -1 if no feasible speed found
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<pair<double, double>> deliveryWindows(N);

        for (int i = 0; i < N; ++i)
        {
            double A, B;
            cin >> A >> B;
            deliveryWindows[i] = {A, B};
        }

        double result = findMinimumSpeed(N, deliveryWindows);

        // Printing result with fixed precision
        cout << fixed << setprecision(10) << result << endl;
    }
    return 0;
}
