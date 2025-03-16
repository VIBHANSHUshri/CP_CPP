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

    double x, y;
    cin >> x >> y;

    if(x > 0 && y > 0) cout << "Q1" << endl;
    else if(x > 0 && y < 0) cout << "Q4" << endl;
    else if(x < 0 && y > 0) cout << "Q2" << endl;
    else if(x < 0 && y < 0) cout << "Q3" << endl;
    else if(x == 0 && y == 0) cout << "Origem" << endl;
    else if(x == 0) cout << "Eixo Y" << endl;
    else if(y == 0) cout << "Eixo X" << endl;
    return 0;
}