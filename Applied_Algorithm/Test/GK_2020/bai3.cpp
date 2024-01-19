#include <bits/stdc++.h>
using namespace std;
int X[7]; //H0-U1-S2-T3-O4-I5-C6
int N;
int cnt;
bool visited[10];

bool check(int v, int k){
    if(k==0&&v==0) return false;
    if(k==2&&v==0) return false;
    if(visited[v]) return false;
    return true;
}
void solution(){
    int hust = X[0]*1000 + X[1]*100 + X[2]*10 +X[3];
    int soict = X[2]*10000 + X[4]*1000 + X[5]*100 + X[6]*10 + X[3];
    if (hust+soict==N) cnt++;
}

void Try(int k){
    for (int v=0;v<10;v++){
        if (check(v,k)) {
            X[k]=v;
            visited[v] = true;
            if (k==6) solution();
            else Try(k+1);
            visited[v]=false;
        }
    }
}

int main(){
    int T;
    cin >> T;
    for (int i=0;i<T;i++){
        cin >> N;
        
        for (int i=0; i<10; i++){
            visited[i] = false;
        }
        cnt=0;
        if (N%2==1||N>200000){
            cout << 0;
        }
        else{
            Try(0);
            cout << cnt;
        }
    }
}
