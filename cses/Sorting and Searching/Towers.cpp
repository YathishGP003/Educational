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
    
    vector<int> a;
    a.push_back(INT_MAX);
    while(n--) {
        int x = nxt();
        auto it = upper_bound(all(a), x);
        if(it == a.end()) {
            a.push_back(x);
        }
        else {
            *it = x;
        }
    }
    cout << a.size() << '\n';
    
    return 0;
}
