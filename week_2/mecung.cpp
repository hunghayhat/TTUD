#include <bits/stdc++.h>
using namespace std;

const int MAXN = 999 + 5;
int a[MAXN][MAXN];
int d[MAXN][MAXN];
int visited[MAXN][MAXN];
int m, n, r, c;
queue<pair<int, int>> q;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int solve()
{
    q.push(make_pair(r, c));
    visited[r][c] = true;
    while (!q.empty())
    {
        pair<int, int> u = q.front();

        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x = u.first + dx[i];
            int y = u.second + dy[i];
            if (x < 0 || x > m - 1 || y < 0 || y > n - 1)
                return d[u.first][u.second];
            if (!a[x][y] && !visited[x][y])
            {
                q.push(make_pair(x, y));
                visited[x][y] = true;
                d[x][y] = d[u.first][u.second] + 1;
            }
        }
    }
    return -1;
    void input(){
        cin >> n >> m >> r >> c;
        for (int i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            }
}