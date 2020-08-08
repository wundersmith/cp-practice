#include <iostream>

using namespace std;

int main(){
    int n; 
    scanf("%d\n", &n);

    int loveInterest[n];

    for (int i=0; i<n; i++){
        scanf("%d", &loveInterest[i]);
    }

    bool ans = false;

    for (int i=0; i<n; i++){
        if (loveInterest[loveInterest[loveInterest[i]-1]-1]-1==i){
            ans = true;
            break;
        }
    }

    if (ans){
        printf("YES\n");
    } else {
        printf("NO\n");
    }
	
	return 0;
}