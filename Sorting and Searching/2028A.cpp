#include "bits/stdc++.h"
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tcs; 
    cin >> tcs;
    while (tcs--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        int x = 0, y = 0; // Starting position (0, 0)

        for (int i = 0; i < n; i++) {
            if (s[i] == 'N') {
                y += 1;
            } else if (s[i] == 'E') {
                x += 1;
            } else if (s[i] == 'S') {
                y -= 1;
            } else if (s[i] == 'W') {
                x -= 1;
            }
        }

        // Check if we reach the desired coordinates (a, b)
        if (x == a && y == b) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
