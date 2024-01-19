#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    double best_avg=0;
    for (int i=0;i<n-k;i++) {
        double avg = 0;
        double sum = 0;
        for (int j=i;j<n;j++){
            sum+=a[j];
            if (j>=i+k){
                avg = sum/(j-i+1);
                best_avg = max(best_avg,avg);
            }
        }
    }
    printf("%.5lf",best_avg);
}