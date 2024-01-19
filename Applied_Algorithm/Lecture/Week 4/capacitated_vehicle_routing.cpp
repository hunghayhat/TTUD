#include <bits/stdc++.h>
using namespace std;

int n,K,Q;
int d[12];
int c[12][12];

int main(){
    cin >> n >> K >> Q;
    for (int i = 0; i < n; i++){
        cin >> d[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> c[i][j];
        }
    }
}