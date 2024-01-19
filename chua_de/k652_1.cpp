#include<bits/stdc++.h>
using namespace std;
#define MAX 99

int main (){
    int m, k, n;
    int sum = 0;
    cin >> n >> k >> m;
    int a[MAX];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int Q = 0;

    for (int i = 0; i < k; i++){
        sum += a[i];
    }

    if (sum == m) Q++;
    for (int i = k; i < n; i++){
        sum += a[i] - a[i-k];
        if (sum ==m) Q++;
    }

    cout << Q;
}