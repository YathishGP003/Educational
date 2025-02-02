#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;
        
    int n = s.size();
    int cnt = 1, res = 1;
    for(int i = 1; i < n; i++) {
        (s[i] == s[i - 1]) ? cnt++ : cnt = 1;
        res = std::max(res, cnt);    
    }
        
    cout << res << '\n';
    
    return 0;
}
