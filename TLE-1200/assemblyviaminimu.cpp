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
      int value = (n*(n-1))/2;
      vector<int>a(value);
      for(int i = 0 ; i < value ; i++)
      {
        cin >> a[i];
      }
      
      sort(a.begin() , a.end());
      int k = n - 1;
      int ind = 0;

      for(int i = 0 ; i < n - 1 ; i++)
      {
         cout << a[ind] <<" ";
         ind += k;
         k--; 
      }

      cout << a[value - 1]  <<" ";
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