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

    string s;
    cin >> s;

    vi prefix(26,0) , suffix(26,0);
     
    for(auto x : s)
    {
        suffix[x-'a']++;
    }
    int ans = 0;
    for(auto x : s)
    {
        suffix[x-'a']--;
        prefix[x-'a']++;
       
        int curr = 0;
        fo(i,0,26)
        {
            curr += min(1,suffix[i]) + min(1,prefix[i]);
        } 
        ans = max(ans,curr);
    }
    cout << ans << "\n";

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