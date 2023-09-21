#include <iostream>
#include <string>
using namespace std;

string key[12] = {"", "abc", "def",
                  "ghi", "jkl", "mno",
                  "pqrs", "tuv", "wxyz",
                  "", " ", ""};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T, count = 0;

    cin >> T;

    for (int t = 0; t < T; t++)
    {
        string line;
        cin >> line;
        int count = 0;
        for (int i = 0; i < line.size(); i++)
        {
            for (int j = 0; j < 12; j++)
            {
                for (int k = 0; k < key[j].size(); k++)
                    if (line[i] == key[j][k])
                    {
                        count += k + 1;
                        break;
                    }
            }
        }
        cout << "Case #" << t + 1 << ": " << count << endl; // In kết quả đếm cho từng trường hợp
    }
    return 0;
}