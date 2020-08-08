#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    scanf("%d", &tc);
    for (int i=0; i<tc; i++){
        long long x;
        cin >> x;
        long long ans=1;
        for (long long i=1; i<=x; i++){
            ans*=i;
            ans= ans % 1000000007;
        }
        cout << ans << "\n";
    }
    return 0;
}
