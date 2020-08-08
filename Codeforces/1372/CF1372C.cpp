#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    int ans[t];
    for (int i=0; i<t; i++){
        int n;
        cin >> n;
        bool sorted = true;

        int arr[n], arrToSort[n];

        for (int j=0; j<n; j++){
            cin >> arr[j];
            arrToSort[j]=arr[j];
            if (arr[j] < arr[j-1] && j>0){
                sorted = false;
            }
        }

        sort(arrToSort, arrToSort+n);
        bool complete=true;
        for (int j=1; j<n; j++){
            if(arr[j]==arrToSort[j] && arr[j-1]!=arrToSort[j-1]){
                if (j==n-1){
                    break;
                } else {
                    bool completete=true;
                    for (int k=j; k<n; k++){
                        if(arr[k]!=arrToSort[k]){

                        complete=false;
                        break;
                        }
                    }
                }
            }
        }


        if (sorted){
            ans[i] = 0;
        } else if (complete){
            ans[i] = 1;
        } else{
            ans[i] = 2;
        }
    }
    for (int i=0; i<t; i++){
        printf("%d\n", ans[i]);
    }
    return 0;
}

/*
1
5
1 4 2 3 5
*/
