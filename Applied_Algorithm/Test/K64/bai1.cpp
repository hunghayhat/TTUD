#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int sequence=1;
    int max_sequence=0;
    cin >> a[0];
    for (int i=1; i<n; i++){
        cin >> a[i];
        if (a[i-1]<a[i]) sequence++;
        else sequence=1;
        max_sequence = max(max_sequence,sequence);
    }
    cout << max_sequence;
}