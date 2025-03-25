#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define pii pair<ll, ll>
#define mod 1000000007
#define INF 1e18

// Loop Macros
#define fo(i, a, b) for (ll i = a; i < b; i++)
#define rfo(i, a, b) for (ll i = a; i >= b; i--)

// Debugging Macro
#define debug(x) cerr << #x << " = " << (x) << '\n';

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Prefix sum array
    vector<ll> presum(n + 1, 0);
    for (ll i = 1; i <= n; i++) {
        presum[i] = presum[i - 1] + a[i - 1];
    }

    ll ans = 0;

    // Iterate through divisors of n
    for (ll i = 1; i <= n; i++) {
        if (n % i == 0) {
            ll max_sum = LLONG_MIN, min_sum = LLONG_MAX;

            for (ll j = i; j <= n; j += i) {
                ll sub_sum = presum[j] - presum[j - i];
                max_sum = max(max_sum, sub_sum);
                min_sum = min(min_sum, sub_sum);
            }

            ans = max(ans, max_sum - min_sum);
        }
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}
