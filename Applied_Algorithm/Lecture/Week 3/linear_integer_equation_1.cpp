#include <bits/stdc++.h>
using namespace std;
// X_1 + X_2 + ... + X_n = M, tìm bộ X

int n,M;
int x[1000];
int sum=0;

void print(){
    for (int i=0; i<n; i++){
        cout << x[i] << " ";
    }
    cout << endl;
}

int check(int v){
    if (sum+v<=M) return 1;
    else return 0;
}

void Try(int k){
    for (int i=1; i<= M-n+1; i++){
        if (check(i)) {
            x[k]=i;
            sum+=x[k];
            if (k==n-1 && sum==M){print();}
            else {
                if (k!=n-1){
                    Try(k+1);
                }
            }
            sum-=x[k];
        }
    }
}


int main(){
    cin >> n >> M;
    Try(0);
    return 0;
}