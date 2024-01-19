#include <bits/stdc++.h>
using namespace std;
int n, A, B;
int Q=0;
int sum=0;
int a[20];
bool check(int sum){
    if (sum>=A&&sum<=B){
        return true;
    }
    return false;
}
void Try(int k){
    for (int v=0; v<2; v++){
        sum += v*a[k];
        if (k==n-1){
            if (check(sum)) Q++;
        }
        else if (sum<=B) Try(k+1);
        sum -= v*a[k];
    }
}
int main(){
    cin >> n >> A >> B;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    Try(0);
    cout << Q;
    return 0;
}