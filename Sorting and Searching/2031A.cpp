#include "bits/stdc++.h"
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tcs;cin >> tcs;
    while(tcs--){
        int n,count=0;cin >> n;
        vector<int>h(n);
        for(int i=0;i<n;i++){
            cin >> h[i];
        }
        for(int i = 1; i < n - 1; i++){
            if(h[i] > h[i-1]){
                count++;
            }
        }
        cout << count << '\n';
    }
    return 0;
}

