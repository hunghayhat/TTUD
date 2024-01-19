#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r,c;
    cin >> n >> m >> r >> c;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    if (a[r][c] == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    // BFS on 2D array
    queue<pair<int, int>> q;
    int visited[n][m];
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++){
            if (a[i][j] == 1)
            {
                visited[i][j] = 1;
            }
            else
            visited[i][j] = 0;
        }
    }
    q.push(make_pair(r, c));
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int x = p.first;
        int y = p.second;
        if (a[x][y] == 1)
        {
            cout << ans << endl;
            return 0;
        }
        a[x][y] = 1;
        if (x - 1 >= 0 && a[x - 1][y] == 0)
        {
            q.push(make_pair(x - 1, y));
        }
        if (x + 1 < n && a[x + 1][y] == 0)
        {
            q.push(make_pair(x + 1, y));
        }
        if (y - 1 >= 0 && a[x][y - 1] == 0)
        {
            q.push(make_pair(x, y - 1));
        }
        if (y + 1 < m && a[x][y + 1] == 0)
        {
            q.push(make_pair(x, y + 1));
        }
        ans++;
    }
    cout << ans << endl;
}