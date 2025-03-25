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
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];   
    }
  
    int ans = v[0];
    int mini = min(0,v[0]);
    int sum = v[0];
   
     for(int i = 1 ; i < n ; i++)
     {
        if (abs(v[i] % 2) == abs(v[i - 1] % 2))
        {
            sum = 0;
            mini = 0;
        }
        sum += v[i];
        ans  = max(ans , sum - mini);
        mini = min(mini , sum);
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