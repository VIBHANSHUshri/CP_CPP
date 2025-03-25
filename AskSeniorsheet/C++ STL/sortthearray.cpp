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
    int n ;
    cin >> n;
    vector<int>a(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }

    sort(a.begin() , a.end());
    for(int i = 0 ;  i< n ; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
        solve();
    
    return 0;
}