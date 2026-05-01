
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long l;
    cin >> n >> l;

    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    double d1 = a[0];
    double d2 = l - a[n-1];

    double max_gap = 0;
    for(int i = 0; i < n-1; i++) {
        max_gap = max(max_gap, (double)(a[i+1] - a[i]));
    }

    double d3 = max_gap / 2.0;

    double ans = max({d1, d2, d3});

    cout << fixed << setprecision(10) << ans << endl;
}
