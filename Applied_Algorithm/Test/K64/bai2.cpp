#include <bits/stdc++.h>
using namespace std;
#define MODULO 1000000007
int main(){
    int n;
    cin >> n;
    int a[n];
    int even[n],odd[n];
    cin >> a[0];
    even[0] = 0;
    odd[0] = 0;
    if (a[0]%2==0) even[0]=1;
    else odd[0]=1;
    for (int i=1; i<n; i++){
        cin >> a[i];
        if (a[i]%2==0){
            even[i] = even[i-1]+1;
        }
        else {
            even[i] = odd[i-1];
        }
        odd[i] = i+1-even[i];
    }
    int sum=0;
    for (int i=0;i<n;i++){
        sum=(sum%MODULO+even[i]%MODULO)%MODULO;
    }
    cout << sum;
}