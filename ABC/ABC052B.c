#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n, x = 0;
	cin >> n;
	string s;
    cin >> s;
    for (int i = 0; i<n; i++){
        if(s[i]=='I'){
            x++;
        } else if (s[i]=='D'){
            x--;
        }
    }
    printf("%d\n", x);
}
