#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string keyBoard[9] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz", " "};

    for (int i = 0; i < T; i++)
    { // Xét từng chuỗi 1
        string chuoi;
        cin.ignore();
        getline(cin, chuoi);
        int count = 0;
        for (int j = 0; j < chuoi.size(); j++) // Chạy từ đầu đến cuối chuỗi
        {
            for (int k = 0; k < 9; k++)
            {
                for (int l = 0; l < keyBoard[k].size(); l++)
                {
                    if (chuoi[j] == keyBoard[k][l])
                    {
                        count += l + 1;
                    }
                }
            }
        }
        cout << "Case #" << i + 1 << ": " << count << endl;
    }
    return 0;
}