#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];

    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    sort(arr, arr+n);

    int ans=0;

    for (int i=0; i<k; i++){
        ans+=arr[i];
    }

    printf("%d\n", ans);

    return 0;
}
