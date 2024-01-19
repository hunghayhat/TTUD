#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    pair<int, int> rmq[m];
    for (int i=0;i<m;i++){
        int l,r;
        cin >> l >> r;
        rmq[i] = make_pair(l,r);
    }
    int q=0;
    for (int i=0;i<m;i++){
        int l = rmq[i].first;
        int r = rmq[i].second;
        int min = a[l];
        for (int j=l+1;j<=r;j++){
            if (a[j] < min)
            min = a[j];
        }
        q += min;
    }
    cout << q;
}