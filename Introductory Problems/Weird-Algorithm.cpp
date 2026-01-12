#include "bits/stdc++.h"
using namespace std;
using ll=long long;

void solve(){
    ll n;cin>>n;
    cout << n << " ";
    if(n==1)
        return;
    
    while (true) {
        if(n&1){
            n=n*3+1;
            cout << n << " ";
        }else{
            n/=2;
            cout << n << " ";
        }
        if(n==1){
            break;
        }
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcs=1;
    while(tcs--)
        solve();
    return 0;
}