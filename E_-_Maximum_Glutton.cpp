#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define di(x) ll x; cin >> x
#define vecll vector<ll>
#define pb push_back
#define all(x) x.begin(), x.end()
#define el << endl
#define MOD int(1e9+7)
typedef pair<ll, ll> pairs;

struct Dish {
    int sweetness;
    int saltiness;
};

bool compare(const Dish& a, const Dish& b) {
    // Sort by sweetness-to-saltiness ratio, or any other metric
    return (a.sweetness * b.saltiness < b.sweetness * a.saltiness);
}

void solve() {
    di(n);
    di(x);
    di(y);
    
    vector<Dish> dishes(n);
    for (int i = 0; i < n; i++) {
        di(a);
        di(b);
        dishes[i] = {a, b};
    }

    // Sort dishes based on the chosen metric
    sort(all(dishes), compare);

    int totalSweetness = 0;
    int totalSaltiness = 0;
    int count = 0;

    for (const auto& dish : dishes) {
        if (totalSweetness + dish.sweetness <= x || totalSaltiness + dish.saltiness <= y) {
            totalSweetness += dish.sweetness;
            totalSaltiness += dish.saltiness;
            count++;
        } else {
            count++;
            break;
        }
    }

    cout << count el;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
