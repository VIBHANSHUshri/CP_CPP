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
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
     
    ll ans = 0 ;
    int number = n;

    //formula for changing the digit from last to first
    while(n != 0)
    {
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;

    }

    cout << ans << endl;
    if(ans == number)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }


    return 0;
}