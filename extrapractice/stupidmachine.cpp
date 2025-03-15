#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> a(n);

        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long minimum = LLONG_MAX;  // Corrected initialization
        long long sum = 0;

        for (long long i = 0; i < n; i++) // Use long long for consistency
        {
            minimum = min(a[i], minimum);
            sum += minimum;
        }

        cout << sum << endl;
    }

    return 0;
}
