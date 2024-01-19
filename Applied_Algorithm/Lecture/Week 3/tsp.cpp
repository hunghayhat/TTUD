#include <bits/stdc++.h>
using namespace std;
#define MAX_N 20
int n, dist[MAX_N][MAX_N];

// Branch and bound version of TSP
// Time complexity: O(n!)
// Space complexity: O(n^2)

bool visited[MAX_N];
int step[MAX_N];
int ans = INT_MAX;
int sum = 0;
int Min = INT_MAX;

void Try(int k){
    for (int i = 0; i < n; i++){
        if (!visited[i]) {
            step[k] = i;
            visited[i] = true;
            sum += dist[step[k-1]][step[k]];
            // Neu da di het n thanh pho thi tinh tong quang duong va cap nhat dap an
            if (k == (n - 1) && sum + dist[step[k]][0] < ans)
            {
                ans = sum + dist[step[k]][0];
            }
            // Neu chua di het n thanh pho
            else if (sum+Min*(n-k+1)<ans){
                Try(k+1);
            }
            visited[i] = false;
            sum -= dist[step[k - 1]][step[k]];
        }
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) {
            cin >> dist[i][j];
            if (dist[i][j]< Min && i!=j) {
                Min = dist[i][j];
            }
        }
        visited[i] = false;
    }
    visited[0] = true;
    step[0] = 0;
    Try(1);
    cout << ans << endl;
}

// Dynamic programming version of TSP using bitmask
// Time complexity: O(n^2 * 2^n)
// Space complexity: O(n * 2^n)

// int dp[MAX_N][1 << MAX_N];

// int tsp(int pos, int mask){
//     if (mask == (1 << n) - 1) return dist[pos][0];
//     if (dp[pos][mask] != -1) return dp[pos][mask];
//     int ans = INF;
//     for (int i = 0; i < n; i++){
//         if ((mask & (1 << i)) == 0){
//             ans = min(ans, dist[pos][i] + tsp(i, mask | (1 << i)));
//         }
//     }
//     return dp[pos][mask] = ans;
// }
// int main(){
//     memset(dp, -1, sizeof(dp));
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++) {
//             cin >> dist[i][j];
//         }
//     }
//     cout << tsp(0, 1) << endl;
// }

