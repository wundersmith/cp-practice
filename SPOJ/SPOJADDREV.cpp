#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    scanf("%d", &tc);
    while(tc--){
        int a,b;
        scanf("%d %d", &a, &b);
        int reverseda=0, reversedb=0;
        while (a>0){
            reverseda*=10;
            reverseda+=a%10;
            a/=10;
        }
        while (b>0){
            reversedb*=10;
            reversedb+=b%10;
            b/=10;
        }
        int reversedAns;
        reversedAns = reverseda + reversedb;
        int ans=0;

        while (reversedAns>0){
            ans*=10;
            ans+=reversedAns%10;
            reversedAns/=10;
        }

        printf("%d\n",ans);
    }
    return 0;
}
