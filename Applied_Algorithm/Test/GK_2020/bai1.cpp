#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    cin >> a[0];
    int dem = 1;
    for (int i=1; i<n; i++){
        cin >> a[i];
        if (a[i]<=a[i-1]) dem++;
    }
    cout << dem;
}