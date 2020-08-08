#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int n;
        int indeksN;
        cin >> n;
        bool ans = false;
        int arr[n];
        for (int j=0; j<n; j++){
            cin >> arr[j];
            if (arr[j]==n){
                indeksN = j+1;
            }
        }
        int start = 0, ending=n;
        int panjang = n;
        while (panjang>=3){
            if (arr[start] != panjang && arr[ending-1]!= panjang){
                ans=true;
                break;
            } else if (arr[start] == panjang){
                start++;
                panjang--;
            } else {
                ending--;
                panjang--;
            }
        }

    }
}
