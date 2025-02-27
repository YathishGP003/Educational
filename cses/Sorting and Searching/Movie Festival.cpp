#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define all(x) (x).begin(), (x).end()
 
inline int nxt() {
    int x;
    cin >> x;
    return x;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n = nxt();
    vector<pair<int, int>> movies;
    
    for(int i = 0; i < n; i++) {
        int x = nxt(), y = nxt();
        movies.push_back({y - 1, x});
    }
    
    sort(all(movies));
    
    int ans = 0, taken = 0;
    for(auto& [end, start] : movies) {
        if(start <= taken) {
            continue;
        }
        ans++;
        taken = max(taken, end);
    }
    
    cout << ans << '\n';
    
    return 0;
}
