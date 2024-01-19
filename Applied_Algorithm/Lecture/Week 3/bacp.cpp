// BACP - Balanced Academic Curiculum Problem
#include <bits/stdc++.h>
using namespace std;
#define N_MAX 16
int n, m;
int credits[N_MAX];
int prerequisites[N_MAX][N_MAX];
int sol[N_MAX];
int load[5];
int min_load = INT_MAX;

// Check if course k can be taken in semester i
bool check(int i, int k){
    for(int j = 0; j < k; j++){
        // If course k is a prerequisite of course j
        // Then course k must be taken before course j
        if (prerequisites[k][j] == 1 && sol[j] <= i){
            return false;
        }
        // If course j is a prerequisite of course k
        // Then course j must be taken before course k
        else if (prerequisites[j][k] == 1 && sol[j] >= i){
            return false;
        }
    }
    return true;
}

void Try(int k){
    for(int i = 0; i < m; i++){
        if (check(i,k)){
            // assign course k to semester i
            sol[k] = i;
            // update load of semester i
            load[i] += credits[k];
            // if all courses are assigned
            if (k == n - 1){
                // update min_load
                int max_load = 0;
                for(int j = 0; j < m; j++){
                    if (load[j] > max_load){
                        max_load = load[j];
                    }
                }
                if (max_load < min_load){
                    min_load = max_load;
                }
            }
            else if (load[i] < min_load){
                Try(k+1);
            }
            load[i] -= credits[k];
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> credits[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> prerequisites[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        sol[i] = -1;
        load[i] = 0;
    }
    Try(0);
    cout << min_load;
    return 0;
}