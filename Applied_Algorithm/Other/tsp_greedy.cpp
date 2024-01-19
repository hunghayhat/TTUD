#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int map[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin >> map[i][j];
        }
    }
    bool visited[n];
    for (int i=0;i<n;i++){
        visited[i]=false;
    }
    visited[0]=true;
    int solution[n];
    solution[0]=0;
    for (int k=1;k<n;k++){
        int min=INT_MAX;
        int min_index=-1;
        for (int i=1;i<n;i++){
            if (visited[i]!=true){
                if (map[solution[k-1]][i]<=min){
                    min = map[solution[k-1]][i];
                    min_index=i;
                }
            }
        }
        solution[k] = min_index;
        visited[min_index] = true;
    }
    cout << n << "\n";
    for (int i=0;i<n;i++){
        cout << solution[i]+1 << " ";
    }
}