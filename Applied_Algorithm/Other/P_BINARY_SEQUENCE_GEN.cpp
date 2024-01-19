#include <bits/stdc++.h>
using namespace std;

void binary_gen(int a, int n, int c[]){
    if (a==n){
        for (int i=0; i<n; i++){
            cout << c[i];
        }
        cout << endl;
    }
    else {
        c[a]=0;
        binary_gen(a+1, n, c);
        c[a]=1;
        binary_gen(a+1, n, c);
    }
}

int main(){
    int n;
    cin >> n;
    int c[n];
    binary_gen(0, n, c);
    return 0;
}