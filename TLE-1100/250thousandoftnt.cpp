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
      vector<int>a(n);


      for(int i = 0 ; i < n ; i++)
      {
        cin >> a[i];
      }

      vector<int>presum;
      presum.push_back(0);
      
      int sum = 0;
      for(int i = 0 ; i < n ; i++)
      {
        sum += a[i];
        presum.push_back(sum);
      }
       int ans = 0;
      for(int i = 1; i <= n ; i++)
      {
       
          if(n%i == 0)
          {
            vector<int>v;
            for(int j = i ; j <= n ; j+=i)
            {
               sum = presum[j] - presum[j-i];
               v.push_back(sum);
            }
            int max_sum = *max_element(v.begin(), v.end());
            int min_sum = *min_element(v.begin(), v.end());
            ans = max(ans,max_sum-min_sum);
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