#include "bits/stdc++.h"
using namespace std;

void solve(){
    int x,y;cin >> x >> y;
    int z = max(x,y);
    int max_value = z*z;
    int value=0;
    if(z%2 == 0){
        if(y == z){
            value=max_value-(x-1);
        }else if( x == z){
            value = max_value-(z-y);
        }
    }else{
        if(y == z){
            value = max_value-(z-x);
        }else if(x == z){
            value = max_value-(y-1);
        }
    }
    cout << value << '\n';
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