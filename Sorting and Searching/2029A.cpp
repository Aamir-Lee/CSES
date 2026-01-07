#include "bits/stdc++.h"
typedef long long int ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int tcs;cin >> tcs;
    while(tcs--){
        ll l,r,k;cin >> l >> r >> k;
        vector<int>set;
        int cnt = 0;
        for(int i=l;i<=r;i++) set.push_back(i);
        int size = set.size();
        for(int i=0;i<size;i++)
            for(int j=i+1;j<=size;j++)
                if((set[i] % j== 0) > k )
                    cnt++;
        cout << cnt << '\n';
    }

}