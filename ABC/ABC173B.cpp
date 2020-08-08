#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    string s;
    int n, ac=0, wa=0, tle=0, re=0;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> s;
        if (s=="AC"){
            ac++;
        } else if (s=="WA"){
            wa++;
        } else if (s=="TLE"){
            tle++;
        } else {
            re++;
        }
    }
    printf("AC x %d\n", ac);
    printf("WA x %d\n", wa);
    printf("TLE x %d\n", tle);
    printf("RE x %d\n", re);
}
