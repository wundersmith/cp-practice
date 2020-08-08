#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, s;
    scanf("%d %d %d", &n, &k, &s);
    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+n, greater<int>());
    int i=0;
    int sum=0;

    while (sum < k*s){
        sum+=arr[i];
        i++;
    }
    printf("%d", i);
    return 0;
}
