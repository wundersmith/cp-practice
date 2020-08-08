#include <stdio.h>
#include <iostream>

using namespace std

int n;
cin >> n;
int problems[n+1];
int sum = 0;

for (int i=0; i<n; i++){
    cin >> problems[i];
    sum += problems[i];
}

int m;
cin >> m;
int drinks[m+1];
int times[m+1];

for (int i=0; i<m; i++){
    cin >> drinks[i] >> times[i];
}

for (int i=0; i<m; i++){
    int ans = sum;
    ans -= problems[drinks[i] + times[i];
    printf("%d\n", ans);
}

