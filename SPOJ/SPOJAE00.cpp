#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int ans =0;

    for (int i=1; i<=n; i++){
        for (int j=i; j<=n; j++){
            if(i*j<=n){
                ans++;
            } else {
                break;
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}
