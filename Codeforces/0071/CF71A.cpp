#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        string s;
        cin >> s;
        if (s.length()>10){
            char char1= s.at(0);
            char char2= s.at(s.length()-1);
            printf("%c%d%c\n", char1, (s.length()-2), char2);
        } else {
            cout << s << endl;
        }
    }
    return 0;
}
