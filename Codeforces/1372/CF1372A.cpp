#include <iostream>
#include <stdio.h>
using namespace std;

bool isPrima(int x){
    bool ans=true;
    for (int i=2; i*i<=x; i++){
        if (x%i==0){
            ans=false;
            break;
        }
    }

    if(x==2){
        ans=true;
    }

    return ans;
}

int biggestFactor(int x){
    int i=2;
    while(x%i!=0){
        i++;
    }
    return x/i;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans1, ans2;

    for (int i=0; i<n; i++){
        if (arr[i] % 2==0){
            ans1 = arr[i]/2;
            ans2 = ans1;
        } else if (isPrima(arr[i])){
            ans1=1;
            ans2=arr[i]-1;
        } else {
            ans1 = biggestFactor(arr[i]);
            ans2 = arr[i]-ans1;
        }
        printf("%d %d\n", ans1, ans2);
    }

    return 0;
}
