#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

void solve() {
    int n, d;
    cin >> n >> d;

    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend()); 

    int count = 0; 
    int usedPlayers = 0;  

    for (int i = 0; i < n; i++) {
        int maxPower = a[i];  
        int minPlayers = (d + maxPower) / maxPower;  

        if (usedPlayers + minPlayers > n) break;  

        usedPlayers += minPlayers;  
        count++;  
    }

    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
}
