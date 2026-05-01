
#include <bits/stdc++.h>
using namespace std;

struct Fenwick {
    vector<int> bit;
    int n;

    Fenwick(int n) {
        this->n = n;
        bit.assign(n+1, 0);
    }

    void update(int i, int val) {
        for(; i <= n; i += i & -i)
            bit[i] += val;
    }

    int query(int i) {
        int s = 0;
        for(; i > 0; i -= i & -i)
            s += bit[i];
        return s;
    }
};

int main() {
    vector<int> nums = {1,2,2,3};
    int target = 2;

    int n = nums.size();
    vector<int> pref(n+1, 0);

    for(int i = 0; i < n; i++){
        int val = (nums[i] == target) ? 1 : -1;
        pref[i+1] = pref[i] + val;
    }


    vector<int> all = pref;
    sort(all.begin(), all.end());
    all.erase(unique(all.begin(), all.end()), all.end());

    Fenwick ft(all.size());

    long long ans = 0;

    for(int i = 0; i <= n; i++){
        int pos = lower_bound(all.begin(), all.end(), pref[i]) - all.begin() + 1;
        ans += ft.query(pos - 1);
        ft.update(pos, 1);
    }

    cout << ans << endl;
}
