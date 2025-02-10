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
    cin.tie(NULL);
    
    int n = nxt(), x = nxt();
 
    map<int, int> mp;
    for(int i = 1; i <= n; i++) {
        int val = nxt(); 
        int rem = x - val;
        
        if(mp.count(rem)) {
            cout << mp[rem] << ' '<< i << '\n';
            return 0;
        }
        
        mp[val] = i;
    }
 
    cout << "IMPOSSIBLE\n";
    
    return 0;
}
