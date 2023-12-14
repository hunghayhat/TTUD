#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    int shop[4];
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int sum = 0;
        cin >> shop[0] >> shop[1] >> shop[2] >> shop[3];
        sort(shop,  shop + 4);
        if (shop[0] < 0) sum += shop[0];
        if (shop[1] < 0) sum += shop[1];
        cout << sum << endl;
    }
}