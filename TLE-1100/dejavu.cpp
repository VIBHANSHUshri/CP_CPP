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
     vector<int>a(n) , s = {31};

    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }

    while(q--)
    {
        int x ;
        cin >> x;
        if(x < s.back()) s.push_back(x);
    }
    for(int i = 0 ;  i < s.size(); i++)
    {
         for(ll j = 0 ; j < n ; j++)
         {
            if((a[j] % (1 << s[i])) == 0)
            {
                a[j] = a[j] + (1 << (s[i] - 1));
            }
         }    
    }

    for(ll i = 0 ; i < n ; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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