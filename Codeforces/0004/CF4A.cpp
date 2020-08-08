#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    if(x < 4 || x%2 !=0){
        printf("NO");
    } else {
        printf("YES");
    }
    return 0;
}
