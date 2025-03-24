#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll sum_range(ll l, ll r) {
    return (r - l + 1) * (l + r) / 2;
}

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    
    ll lcm_xy = lcm(x, y);
    ll red_count = n / x;
    ll blue_count = n / y;
    ll purple_count = n / lcm_xy;
    
    ll R = red_count - purple_count;
    ll B = blue_count - purple_count;
    
    ll max_sum = sum_range(n - R + 1, n);
    ll min_sum = sum_range(1, B);
    
    cout << max_sum - min_sum << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
