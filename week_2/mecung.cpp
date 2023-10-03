#include <bits/stdc++.h>
using namespace std;

const int MAXN = 999 + 5;
int a[MAXN][MAXN];
int d[MAXN][MAXN];
int visited[MAXN][MAXN];
int m, n, r, c;
queue<pair<int, int>> q;
// Di chuyển lên, xuống, trái, phải
int dx[] = {1, -1, 0, 0}; // Sang phải - trái
int dy[] = {0, 0, 1, -1}; // Lên trên - xuống dưới
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
    return -1; // Không tìm thấy đường
}
    void input()
    {
        cin >> m >> n >> r >> c;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
    }

int main()
{
    input();
    int result = solve();
    if (result == -1)
        cout << "Khong tim thay duong";
    else
    {
        cout << result << endl;
    }
    return 0;
}