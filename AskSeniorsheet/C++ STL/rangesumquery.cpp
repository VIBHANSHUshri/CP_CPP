#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define mod 1000000007
#define INF 1e9

// Loop Macros
#define fo(i, a, b) for (int i = a; i < b; i++)
#define rfo(i, a, b) for (int i = a; i >= b; i--)

// Debugging Macro
#define debug(x) cerr << #x << " = " << (x) << '\n';

void solve() {
    ll n,q;
    cin >> n >> q;
    vector<ll>a(n);
    for(ll i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
 
    vector<ll>prefixsum;
    prefixsum.push_back(0);
    
    ll sum = 0;
    for(ll i = 0 ; i < n ; i++)
    {
        sum = sum + a[i];
        prefixsum.push_back(sum);
    }

    ll first;
    ll second;
    while(q--)
    {
      cin >> first >> second;

      cout << prefixsum[second] - prefixsum[first-1] << " " ;
      cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


        solve();
    
    return 0;
}