#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int ans = 1000 - (x % 1000);
    if (ans == 1000){
        ans = 0;
    }
    printf("%d\n", ans);
}
