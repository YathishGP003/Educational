#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    set<int> st;
    while(n--) {
      int x; cin >> x;
      st.insert(x);
    }

    cout << st.size() << '\n';
    
    return 0;
}