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
    
    vector<pair<int, int>> ans;
    function<void(int, int, int, int)> findAns = [&](int n, int from, int to, int aux) {
        if(n == 1) {
            ans.push_back({from, to});
            return;
        }
        findAns(n - 1, from, aux, to);
        ans.push_back({from, to});
        findAns(n - 1, aux, to, from);
    };
    
    findAns(n, 1, 3, 2);
    
    cout << ans.size() << '\n';
    for(auto it : ans) {
        cout << (it.first) << ' ';
        cout << (it.second) << '\n';
    }

    return 0;
}