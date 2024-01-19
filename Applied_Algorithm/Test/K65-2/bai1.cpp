#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,m;
    cin >> n >> k >> m;
    int a[n];
    int Q = 0;
    int sum = 0;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    
    for (int i=0; i<k; i++){
        sum += a[i];
    }
    if (sum==m) Q++;
    for (int i=k; i<n; i++){
        sum+= a[i] - a[i-k];
        if (sum==m) Q++;
    }
    cout << Q;
}