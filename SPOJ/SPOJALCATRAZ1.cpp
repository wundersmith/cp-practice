#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    scanf("%d", &tc);
    for (int i=0; i<tc; i++){
        int x;
        scanf("%d", &x);
        int sum=0;
        while(x>0){
            sum+=x%10;
            x/=10;
        }
        printf("%d\n", sum);
    }
    return 0;
}
