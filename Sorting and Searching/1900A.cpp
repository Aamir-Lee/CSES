#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n,count=0;cin >> n;
    string s;cin >> s;
    for(int i=1;i<n;i++){
       if(s[i] == '.'){
        count++;
        i+=2;
       }
    }
    cout << count << '\n';
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