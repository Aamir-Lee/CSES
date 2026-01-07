#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n,cnt=0;cin >> n;
    set<int>st;
    while(n--){
        int x;cin >> x;
        if(st.count(x)){
            cnt++;
            st.erase(x);
        }else
            st.insert(x);
    }
    cout << cnt << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcs;cin >> tcs;
    while(tcs--){
        solve();
    }
    return 0;
}