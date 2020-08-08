#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    string str;
    cin >> str;
    if (str.length()<=n){
        cout << str << "\n";
    } else {
        for (int i=0; i<n; i++){
            cout << str.at(i);
        }
        cout << "...\n";
    }
    return 0;
}
