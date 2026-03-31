
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> cnt(m + 1, 0);

    int mid = (m + 1) / 2;

    for(int ball = 1; ball <= n; ball++){

        int mn = INT_MAX;


        for(int i = 1; i <= m; i++){
            mn = min(mn, cnt[i]);
        }

        int best = -1;
        int best_dist = INT_MAX;


        for(int i = 1; i <= m; i++){
            if(cnt[i] == mn){
                int dist = abs(i - mid);

                if(dist < best_dist ||
                  (dist == best_dist && i < best)){
                    best_dist = dist;
                    best = i;
                }
            }
        }

        cnt[best]++;
        cout << best << "\n";
    }

    return 0;
}
