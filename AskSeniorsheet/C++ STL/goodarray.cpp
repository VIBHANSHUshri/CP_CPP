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


    int tsum = 0;
    vector<int>ans;
    multiset<int>st;
    vector<pair<int,int>>v;
    for(int i = 0 ; i < n ; i++)
    {
        v.push_back({a[i],i});
        tsum += a[i];
        st.insert(a[i]);
    }

    sort(v.begin() , v.end());
   
    for(int i = 0 ; i < v.size() ; i++)
     {
        int val = v[i].first;
        int index = v[i].second;

        st.erase(st.find(val));
        int last = *(--st.end());
        if(tsum - val - last == last)
        {
            ans.push_back(index+1);
        }
        st.insert(val);
     }

    cout << ans.size() << endl;
    for(int i  = 0 ; i < ans.size() ; i++)
    {
        cout << ans[i] << " ";
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