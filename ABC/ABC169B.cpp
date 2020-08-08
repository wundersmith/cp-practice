#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    long long ans=1;

    for (int i=0; i<n; i++){

        long long x;
        cin >> x;
        if (ans*x<0){
            ans=-1;
        }
        else if(ans*x<=1000000000000000000) {
            ans = ans*x;
        } else {
            ans=-1;
        }

    }
    if (ans<0){
        cout << "-1\n";
    } else {
        cout << ans << endl;
    }
    return 0;
}
