#include <bits/stdc++.h>
using namespace std;

int main(){
    string cmd;
    int n;
    stack<int> s;
    cin >> cmd;
    while(cmd!="#"){
        if (cmd=="PUSH"){
            cin >> n;
            s.push(n);
        }
        else if (cmd=="POP"){
            if (s.empty()) cout << "NULL" << endl;
            else {
                cout << s.top() << endl;
                s.pop();
            }
        }
        cin >> cmd;
    }
}