#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    scanf("%d", &tc);
    for (int i=0; i<tc; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        for (int j=a; j<=b; j++){
            if (j==2){
                printf("2\n");
            } else if (j!=1){
                bool prime = true;
                for (int k=2; k*k<=j; k++){
                    if (j%k==0){
                        prime = false;
                        break;
                    }
                }
                if (prime){
                    printf("%d\n", j);
                }
            }
        }
        printf("\n");
    }
}
